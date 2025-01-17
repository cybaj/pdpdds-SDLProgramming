#ifndef _t1904_H_
#define _t1904_H_

///////////////////////////////////////////////////////////////////////////////////////////////////
// ETF구성종목조회(t1904) ( attr,block,headtype=A )
#pragma pack( push, 1 )

#define NAME_t1904     "t1904"

// 기본입력                       
typedef struct _t1904InBlock
{
    char    shcode              [   6];    char    _shcode              ;    // [string,    6] ETF단축코드                     StartPos 0, Length 6
    char    date                [   8];    char    _date                ;    // [string,    8] PDF적용일자                     StartPos 7, Length 8
    char    sgb                 [   1];    char    _sgb                 ;    // [string,    1] 정렬기준(1:평가금액2:증권수)    StartPos 16, Length 1
} t1904InBlock, *LPt1904InBlock;
#define NAME_t1904InBlock     "t1904InBlock"

// 출력                           
typedef struct _t1904OutBlock
{
    char    chk_tday            [   1];    char    _chk_tday            ;    // [string,    1] 당일구분                        StartPos 0, Length 1
    char    date                [   8];    char    _date                ;    // [string,    8] PDF적용일자                     StartPos 2, Length 8
    char    price               [   8];    char    _price               ;    // [long  ,    8] ETF현재가                       StartPos 11, Length 8
    char    sign                [   1];    char    _sign                ;    // [string,    1] ETF전일대비구분                 StartPos 20, Length 1
    char    change              [   8];    char    _change              ;    // [long  ,    8] ETF전일대비                     StartPos 22, Length 8
    char    diff                [   6];    char    _diff                ;    // [float ,  6.2] ETF등락율                       StartPos 31, Length 6
    char    volume              [  12];    char    _volume              ;    // [long  ,   12] ETF누적거래량                   StartPos 38, Length 12
    char    nav                 [   8];    char    _nav                 ;    // [float ,  8.2] NAV                             StartPos 51, Length 8
    char    navsign             [   1];    char    _navsign             ;    // [string,    1] NAV전일대비구분                 StartPos 60, Length 1
    char    navchange           [   8];    char    _navchange           ;    // [float ,  8.2] NAV전일대비                     StartPos 62, Length 8
    char    navdiff             [   6];    char    _navdiff             ;    // [float ,  6.2] NAV등락율                       StartPos 71, Length 6
    char    jnilnav             [   8];    char    _jnilnav             ;    // [float ,  8.2] 전일NAV                         StartPos 78, Length 8
    char    jnilnavsign         [   1];    char    _jnilnavsign         ;    // [string,    1] 전일NAV전일대비구분             StartPos 87, Length 1
    char    jnilnavchange       [   8];    char    _jnilnavchange       ;    // [float ,  8.2] 전일NAV전일대비                 StartPos 89, Length 8
    char    jnilnavdiff         [   6];    char    _jnilnavdiff         ;    // [float ,  6.2] 전일NAV등락율                   StartPos 98, Length 6
    char    upname              [  20];    char    _upname              ;    // [string,   20] 업종명                          StartPos 105, Length 20
    char    upcode              [   3];    char    _upcode              ;    // [string,    3] 업종코드                        StartPos 126, Length 3
    char    upprice             [   7];    char    _upprice             ;    // [float ,  7.2] 업종현재가                      StartPos 130, Length 7
    char    upsign              [   1];    char    _upsign              ;    // [string,    1] 업종전일비구분                  StartPos 138, Length 1
    char    upchange            [   6];    char    _upchange            ;    // [float ,  6.2] 업종전일대비                    StartPos 140, Length 6
    char    updiff              [   6];    char    _updiff              ;    // [float ,  6.2] 업종등락율                      StartPos 147, Length 6
    char    futname             [  20];    char    _futname             ;    // [string,   20] 선물최근월물명                  StartPos 154, Length 20
    char    futcode             [   8];    char    _futcode             ;    // [string,    8] 선물최근월물코드                StartPos 175, Length 8
    char    futprice            [   6];    char    _futprice            ;    // [float ,  6.2] 선물현재가                      StartPos 184, Length 6
    char    futsign             [   1];    char    _futsign             ;    // [string,    1] 선물전일비구분                  StartPos 191, Length 1
    char    futchange           [   6];    char    _futchange           ;    // [float ,  6.2] 선물전일대비                    StartPos 193, Length 6
    char    futdiff             [   6];    char    _futdiff             ;    // [float ,  6.2] 선물등락율                      StartPos 200, Length 6
    char    upname2             [  20];    char    _upname2             ;    // [string,   20] 참고지수명                      StartPos 207, Length 20
    char    upcode2             [   3];    char    _upcode2             ;    // [string,    3] 참고지수코드                    StartPos 228, Length 3
    char    upprice2            [   7];    char    _upprice2            ;    // [float ,  7.2] 참고지수현재가                  StartPos 232, Length 7
    char    etftotcap           [  12];    char    _etftotcap           ;    // [long  ,   12] 순자산총액(단위:억)             StartPos 240, Length 12
    char    etfnum              [   4];    char    _etfnum              ;    // [long  ,    4] 구성종목수                      StartPos 253, Length 4
    char    etfcunum            [  12];    char    _etfcunum            ;    // [long  ,   12] CU주식수                        StartPos 258, Length 12
    char    cash                [  12];    char    _cash                ;    // [long  ,   12] 현금                            StartPos 271, Length 12
    char    opcom_nmk           [  20];    char    _opcom_nmk           ;    // [string,   20] 운용사명                        StartPos 284, Length 20
    char    tot_pval            [  12];    char    _tot_pval            ;    // [long  ,   12] 전종목평가금액합                StartPos 305, Length 12
    char    tot_sigatval        [  12];    char    _tot_sigatval        ;    // [long  ,   12] 전종목구성시가총액합            StartPos 318, Length 12
} t1904OutBlock, *LPt1904OutBlock;
#define NAME_t1904OutBlock     "t1904OutBlock"

// 출력1                          , occurs
typedef struct _t1904OutBlock1
{
    char    shcode              [  12];    char    _shcode              ;    // [string,   12] 단축코드                        StartPos 0, Length 12
    char    hname               [  20];    char    _hname               ;    // [string,   20] 한글명                          StartPos 13, Length 20
    char    price               [   8];    char    _price               ;    // [long  ,    8] 현재가                          StartPos 34, Length 8
    char    sign                [   1];    char    _sign                ;    // [string,    1] 전일대비구분                    StartPos 43, Length 1
    char    change              [   8];    char    _change              ;    // [long  ,    8] 전일대비                        StartPos 45, Length 8
    char    diff                [   6];    char    _diff                ;    // [float ,  6.2] 등락율                          StartPos 54, Length 6
    char    volume              [  12];    char    _volume              ;    // [long  ,   12] 누적거래량                      StartPos 61, Length 12
    char    value               [  12];    char    _value               ;    // [long  ,   12] 거래대금(백만)                  StartPos 74, Length 12
    char    icux                [  12];    char    _icux                ;    // [long  ,   12] 단위증권수(계약수/원화현금/USD� StartPos 87, Length 12
    char    parprice            [  12];    char    _parprice            ;    // [long  ,   12] 액면금액/설정현금액             StartPos 100, Length 12
    char    pvalue              [  12];    char    _pvalue              ;    // [long  ,   12] 평가금액                        StartPos 113, Length 12
    char    sigatvalue          [  12];    char    _sigatvalue          ;    // [long  ,   12] 구성시가총액                    StartPos 126, Length 12
    char    profitdate          [   8];    char    _profitdate          ;    // [string,    8] PDF적용일자                     StartPos 139, Length 8
    char    weight              [   6];    char    _weight              ;    // [float ,  6.2] 비중(평가금액)                  StartPos 148, Length 6
    char    diff2               [   6];    char    _diff2               ;    // [float ,  6.2] ETF종목과등락차                 StartPos 155, Length 6
} t1904OutBlock1, *LPt1904OutBlock1;
#define NAME_t1904OutBlock1     "t1904OutBlock1"

#pragma pack( pop )
///////////////////////////////////////////////////////////////////////////////////////////////////

#endif // _t1904_H_
