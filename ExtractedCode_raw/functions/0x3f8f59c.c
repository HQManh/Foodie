// rea decompile_all
// name: FUN_03f8f59c
// address: 0x3f8f59c
// body: available
// range: 0x3f8f59c-0x3f8f933 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x3f8f930 to 0x89db930 <EXTERNAL>::__stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_03f8f59c(int param_1,long *param_2,char *param_3,char *param_4)

{
  char *pcVar1;
  char *pcVar2;
  char cVar3;
  long lVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  tm *ptVar9;
  long lVar10;
  long lVar11;
  int iVar12;
  long lVar13;
  long local_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 local_140;
  long lStack_138;
  char *local_130;
  long local_128;
  tm local_120;
  tm local_e0;
  char acStack_a8 [64];
  long local_68;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  local_e0.tm_sec = 0;
  local_e0.tm_min = 0;
  local_e0.tm_wday = 0;
  local_e0.tm_yday = 0;
  local_e0.tm_gmtoff = 0;
  local_e0.tm_isdst = 0;
  local_e0._36_4_ = 0;
  local_e0.tm_zone = (char *)0x0;
  local_e0.tm_hour = 0;
  local_e0.tm_mday = 1;
  local_e0._16_8_ = (ulong)(param_1 - 0x76c) << 0x20;
  local_128 = mktime(&local_e0);
  if ((param_1 - 0x7f6U < 0xffffffbc) || (local_128 == -1)) {
    local_128 = time((time_t *)0x0);
    ptVar9 = localtime(&local_128);
    local_120.tm_wday = ptVar9->tm_wday;
    local_120.tm_yday = ptVar9->tm_yday;
    local_120.tm_mon = ptVar9->tm_mon;
    local_120.tm_year = ptVar9->tm_year;
    local_120.tm_gmtoff = ptVar9->tm_gmtoff;
    local_120.tm_isdst = ptVar9->tm_isdst;
    local_120._36_4_ = *(undefined4 *)&ptVar9->field_0x24;
    local_120.tm_zone = ptVar9->tm_zone;
    local_120.tm_hour = ptVar9->tm_hour;
    local_120.tm_mday = ptVar9->tm_mday;
    local_120.tm_sec = ptVar9->tm_sec;
    local_120.tm_min = ptVar9->tm_min;
    strftime(acStack_a8,0x40,"%Z",&local_120);
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign(param_3);
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign(param_3 + 0x18);
LAB_03f8f8c4:
    *param_4 = '\0';
  }
  else {
    iVar6 = local_e0.tm_isdst;
    pcVar1 = param_3 + 0x18;
    *param_4 = local_e0.tm_isdst != 0;
    pcVar2 = pcVar1;
    if (local_e0.tm_isdst != 0) {
      pcVar2 = param_3;
    }
    iVar7 = FUN_03f8f934(&local_e0,local_128);
    iVar12 = 0;
    bVar5 = true;
    lVar13 = (long)iVar7;
    do {
      iVar12 = iVar12 + 1;
      while( true ) {
        local_128 = local_128 + 0x15180;
        ptVar9 = localtime(&local_128);
        local_120.tm_hour = ptVar9->tm_hour;
        local_120.tm_mday = ptVar9->tm_mday;
        local_120.tm_sec = ptVar9->tm_sec;
        local_120.tm_min = ptVar9->tm_min;
        local_120.tm_wday = ptVar9->tm_wday;
        local_120.tm_yday = ptVar9->tm_yday;
        local_120.tm_mon = ptVar9->tm_mon;
        local_120.tm_year = ptVar9->tm_year;
        local_120.tm_zone = ptVar9->tm_zone;
        local_120.tm_gmtoff = ptVar9->tm_gmtoff;
        local_120.tm_isdst = ptVar9->tm_isdst;
        local_120._36_4_ = *(undefined4 *)&ptVar9->field_0x24;
        iVar8 = FUN_03f8f934(&local_120,local_128);
        if (lVar13 != iVar8) break;
        iVar12 = iVar12 + 1;
        if (iVar12 == 0x16e) {
          if (!bVar5) goto LAB_03f8f8c8;
          strftime(acStack_a8,0x40,"%Z",&local_120);
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
                    (param_3);
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
                    (pcVar1);
          *param_2 = 0;
          param_2[1] = 0;
          param_2[2] = lVar13 * 10000000;
          param_2[3] = 0;
          goto LAB_03f8f8c4;
        }
      }
      local_168 = local_128;
      do {
        local_168 = local_168 + -0xe10;
        ptVar9 = localtime(&local_168);
        uStack_158._0_4_ = ptVar9->tm_hour;
        uStack_158._4_4_ = ptVar9->tm_mday;
        local_160._0_4_ = ptVar9->tm_sec;
        local_160._4_4_ = ptVar9->tm_min;
        uStack_148._0_4_ = ptVar9->tm_wday;
        uStack_148._4_4_ = ptVar9->tm_yday;
        uStack_150._0_4_ = ptVar9->tm_mon;
        uStack_150._4_4_ = ptVar9->tm_year;
        lStack_138 = ptVar9->tm_gmtoff;
        local_140 = *(undefined8 *)&ptVar9->tm_isdst;
        local_130 = ptVar9->tm_zone;
        iVar8 = FUN_03f8f934(&local_160,local_168);
      } while (lVar13 != iVar8);
      do {
        local_168 = local_168 + 0x3c;
        ptVar9 = localtime(&local_168);
        uStack_158._0_4_ = ptVar9->tm_hour;
        uStack_158._4_4_ = ptVar9->tm_mday;
        local_160._0_4_ = ptVar9->tm_sec;
        local_160._4_4_ = ptVar9->tm_min;
        uStack_148._0_4_ = ptVar9->tm_wday;
        uStack_148._4_4_ = ptVar9->tm_yday;
        uStack_150._0_4_ = ptVar9->tm_mon;
        uStack_150._4_4_ = ptVar9->tm_year;
        lStack_138 = ptVar9->tm_gmtoff;
        local_140 = *(undefined8 *)&ptVar9->tm_isdst;
        local_130 = ptVar9->tm_zone;
        iVar8 = FUN_03f8f934(&local_160,local_168);
      } while (lVar13 == iVar8);
      local_168 = local_168 + lVar13;
      strftime(acStack_a8,0x40,"%Z",&local_120);
      if (!bVar5) {
        if (iVar6 != 0) {
          param_3 = pcVar1;
        }
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::assign(param_3);
        param_2[1] = local_168 * 10000000 + 0x89f7ff5f7b58000;
        break;
      }
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      assign(pcVar2);
      cVar3 = *param_4;
      *param_2 = local_168 * 10000000 + 0x89f7ff5f7b58000;
      if (cVar3 == '\0') {
        param_2[2] = lVar13 * 10000000;
        iVar8 = FUN_03f8f934(&local_120,local_128);
        lVar11 = (long)iVar8;
        lVar10 = lVar13;
      }
      else {
        iVar8 = FUN_03f8f934(&local_120,local_128);
        param_2[2] = ((iVar7 - lVar13) + (long)iVar8) * 10000000;
        iVar8 = FUN_03f8f934(&local_120,local_128);
        lVar10 = (long)iVar8;
        lVar11 = lVar13;
      }
      param_2[3] = (lVar11 - lVar10) * 10000000;
      iVar8 = FUN_03f8f934(&local_120,local_128);
      lVar13 = (long)iVar8;
      bVar5 = false;
    } while (iVar12 != 0x16d);
  }
LAB_03f8f8c8:
  if (*(long *)(lVar4 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return 1;
}

