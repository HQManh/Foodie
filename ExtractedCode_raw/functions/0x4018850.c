// rea decompile_all
// name: FUN_04018850
// address: 0x4018850
// body: available
// range: 0x4018850-0x4018d63 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_04018850(undefined8 *param_1,undefined8 *param_2,basic_string *param_3,uint param_4)

{
  bool bVar1;
  collate_byname<char> *this;
  collate_byname<wchar_t> *this_00;
  ctype_byname<char> *this_01;
  ctype_byname<wchar_t> *this_02;
  undefined8 *puVar2;
  codecvt<wchar_t,char,mbstate_t> *this_03;
  void *pvVar3;
  numpunct_byname<char> *this_04;
  numpunct_byname<wchar_t> *this_05;
  long lVar4;
  long lVar5;
  basic_string *pbVar6;
  long lVar7;
  ulong uVar9;
  ulong uVar8;
  
  *param_1 = &UNK_08faab28;
  param_1[1] = 0xffffffffffffffff;
  *(undefined1 *)(param_1 + 0x23) = 1;
  param_1[6] = 0;
  param_1[5] = 0;
  param_1[2] = param_1 + 5;
  param_1[8] = 0;
  param_1[7] = 0;
  param_1[10] = 0;
  param_1[9] = 0;
  param_1[0xc] = 0;
  param_1[0xb] = 0;
  param_1[0xe] = 0;
  param_1[0xd] = 0;
  param_1[0x10] = 0;
  param_1[0xf] = 0;
  param_1[0x12] = 0;
  param_1[0x11] = 0;
  param_1[0x14] = 0;
  param_1[0x13] = 0;
  param_1[0x16] = 0;
  param_1[0x15] = 0;
  param_1[0x18] = 0;
  param_1[0x17] = 0;
  param_1[0x1a] = 0;
  param_1[0x19] = 0;
  param_1[0x1c] = 0;
  param_1[0x1b] = 0;
  param_1[0x1e] = 0;
  param_1[0x1d] = 0;
  param_1[0x20] = 0;
  param_1[0x1f] = 0;
  param_1[0x22] = 0;
  param_1[0x21] = 0;
  param_1[3] = param_1 + 0x23;
  param_1[4] = param_1 + 0x23;
  FUN_04013918(param_1 + 0x24,param_2 + 0x24,param_3,param_4);
  if (param_1 != param_2) {
    FUN_0402c22c(param_1 + 2,param_2[2],param_2[3],(long)(param_2[3] - param_2[2]) >> 3);
  }
  lVar5 = param_1[2];
  lVar4 = param_1[3];
  if (lVar4 != lVar5) {
    uVar8 = 0;
    uVar9 = 1;
    do {
      lVar7 = *(long *)(lVar5 + uVar8 * 8);
      if (lVar7 != 0) {
        FUN_0404bff0(1,lVar7 + 8);
        lVar5 = param_1[2];
        lVar4 = param_1[3];
      }
      bVar1 = uVar9 < (ulong)(lVar4 - lVar5 >> 3);
      uVar8 = uVar9;
      uVar9 = (ulong)((int)uVar9 + 1);
    } while (bVar1);
  }
  if ((param_4 >> 3 & 1) != 0) {
    this = operator_new(0x18);
    std::__ndk1::collate_byname<char>::collate_byname(this,param_3,0);
    FUN_04016ac8(param_1,this);
    this_00 = operator_new(0x18);
    std::__ndk1::collate_byname<wchar_t>::collate_byname(this_00,param_3,0);
    FUN_04016bf4(param_1,this_00);
  }
  if ((param_4 & 1) != 0) {
    this_01 = operator_new(0x28);
    std::__ndk1::ctype_byname<char>::ctype_byname(this_01,param_3,0);
    FUN_04016d20(param_1,this_01);
    this_02 = operator_new(0x18);
    std::__ndk1::ctype_byname<wchar_t>::ctype_byname(this_02,param_3,0);
    FUN_04016e4c(param_1,this_02);
    puVar2 = operator_new(0x10);
    *puVar2 = &PTR__codecvt_byname_08face38;
    puVar2[1] = 0xffffffffffffffff;
    FUN_04016f78(param_1);
    this_03 = operator_new(0x18);
    pbVar6 = *(basic_string **)(param_3 + 0x10);
    if (((byte)*param_3 & 1) == 0) {
      pbVar6 = param_3 + 1;
    }
    std::__ndk1::codecvt<wchar_t,char,mbstate_t>::codecvt(this_03,(char *)pbVar6,0);
    *(undefined ***)this_03 = &PTR__codecvt_byname_08faceb0;
    FUN_040170a4(param_1,this_03);
    puVar2 = operator_new(0x10);
    *puVar2 = &PTR__codecvt_byname_08facf28;
    puVar2[1] = 0xffffffffffffffff;
    FUN_040171d0(param_1);
    puVar2 = operator_new(0x10);
    *puVar2 = &PTR__codecvt_byname_08facfa0;
    puVar2[1] = 0xffffffffffffffff;
    FUN_040172fc(param_1);
    puVar2 = operator_new(0x10);
    *puVar2 = &PTR__codecvt_byname_08fad018;
    puVar2[1] = 0xffffffffffffffff;
    FUN_04017428(param_1);
    puVar2 = operator_new(0x10);
    *puVar2 = &PTR__codecvt_byname_08fad090;
    puVar2[1] = 0xffffffffffffffff;
    FUN_04017554(param_1);
  }
  if ((param_4 >> 4 & 1) != 0) {
    pvVar3 = operator_new(0x88);
    FUN_04017a04(pvVar3,param_3,0);
    FUN_040178d8(param_1,pvVar3);
    pvVar3 = operator_new(0x88);
    FUN_04017c20(pvVar3,param_3,0);
    FUN_04017af4(param_1,pvVar3);
    pvVar3 = operator_new(0x88);
    FUN_04017e3c(pvVar3,param_3,0);
    FUN_04017d10(param_1,pvVar3);
    pvVar3 = operator_new(0x88);
    FUN_04018058(pvVar3,param_3,0);
    FUN_04017f2c(param_1,pvVar3);
  }
  if ((param_4 >> 1 & 1) != 0) {
    this_04 = operator_new(0x30);
    std::__ndk1::numpunct_byname<char>::numpunct_byname(this_04,param_3,0);
    FUN_04017680(param_1,this_04);
    this_05 = operator_new(0x30);
    std::__ndk1::numpunct_byname<wchar_t>::numpunct_byname(this_05,param_3,0);
    FUN_040177ac(param_1,this_05);
  }
  if ((param_4 >> 2 & 1) != 0) {
    puVar2 = operator_new(0x440);
    *puVar2 = &PTR____shared_weak_count_08fabfc8;
    puVar2[1] = 0xffffffffffffffff;
    puVar2[2] = &UNK_08fac028;
    std::__ndk1::__time_get_storage<char>::__time_get_storage
              ((__time_get_storage<char> *)(puVar2 + 3),param_3);
    *puVar2 = &PTR_FUN_08fac1d8;
    puVar2[2] = &UNK_08fac270;
    FUN_04018148(param_1,puVar2);
    puVar2 = operator_new(0x440);
    *puVar2 = &PTR____shared_weak_count_08fac0d8;
    puVar2[1] = 0xffffffffffffffff;
    puVar2[2] = &UNK_08fac138;
    std::__ndk1::__time_get_storage<wchar_t>::__time_get_storage
              ((__time_get_storage<wchar_t> *)(puVar2 + 3),param_3);
    *puVar2 = &PTR_FUN_08fac318;
    puVar2[2] = &UNK_08fac3b0;
    FUN_04018274(param_1,puVar2);
    puVar2 = operator_new(0x18);
    FUN_0402d2e0(puVar2,param_3,0);
    *puVar2 = &PTR_FUN_08fac528;
    FUN_040183a0(param_1,puVar2);
    puVar2 = operator_new(0x18);
    FUN_0402d3c0(puVar2,param_3,0);
    *puVar2 = &PTR_FUN_08fac570;
    FUN_040184cc(param_1,puVar2);
  }
  if ((param_4 >> 5 & 1) != 0) {
    puVar2 = operator_new(0x10);
    *puVar2 = &PTR__facet_08facd88;
    puVar2[1] = 0xffffffffffffffff;
    FUN_040185f8(param_1);
    puVar2 = operator_new(0x10);
    *puVar2 = &PTR__facet_08facde0;
    puVar2[1] = 0xffffffffffffffff;
    FUN_04018724(param_1);
  }
  return;
}

