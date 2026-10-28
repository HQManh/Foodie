// rea decompile_all
// name: FUN_03fb43ec
// address: 0x3fb43ec
// body: available
// range: 0x3fb43ec-0x3fb4687 inclusive
// range: 0x3fb46d4-0x3fb46d7 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x3fb46d4 to 0x89db930 <EXTERNAL>::__stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x03fb458c) */
/* WARNING: Removing unreachable block (ram,0x03fb45b8) */

void FUN_03fb43ec(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                  *param_1,undefined8 *param_2)

{
  long lVar1;
  byte bVar2;
  ulong uVar3;
  byte bVar4;
  long lVar5;
  int iVar6;
  char *pcVar7;
  char *pcVar8;
  byte *pbVar9;
  long lVar10;
  byte local_450 [9];
  undefined7 local_447;
  undefined1 uStack_440;
  undefined1 local_43f;
  undefined6 uStack_43e;
  char acStack_438 [1024];
  long local_38;
  
  lVar5 = tpidr_el0;
  local_38 = *(long *)(lVar5 + 0x28);
  pcVar7 = (char *)*param_2;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  append(param_1,pcVar7);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  append(param_1,", Version=");
  snprintf(acStack_438,0x400,"%d",(ulong)*(uint *)((long)param_2 + 0x24));
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  append(param_1,acStack_438);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  append(param_1,".");
  snprintf(acStack_438,0x400,"%d",(ulong)*(uint *)(param_2 + 5));
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  append(param_1,acStack_438);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  append(param_1,".");
  snprintf(acStack_438,0x400,"%d",(ulong)*(uint *)((long)param_2 + 0x2c));
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  append(param_1,acStack_438);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  append(param_1,".");
  snprintf(acStack_438,0x400,"%d",(ulong)*(uint *)(param_2 + 6));
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  append(param_1,acStack_438);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  append(param_1,", Culture=");
  pcVar8 = (char *)param_2[1];
  pcVar7 = "neutral";
  if ((pcVar8 != (char *)0x0) && (*pcVar8 != '\0')) {
    pcVar7 = pcVar8;
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  append(param_1,pcVar7);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  append(param_1,", PublicKeyToken=");
  if (*(byte *)((long)param_2 + 0x34) == 0) {
    FUN_03f6321c(local_450,&DAT_01a48046);
  }
  else {
    lVar10 = 0;
    local_450[0] = 0x20;
    local_450[1] = 0x30;
    local_450[2] = 0x30;
    local_450[3] = 0x30;
    local_450[4] = 0x30;
    local_450[5] = 0x30;
    local_450[6] = 0x30;
    local_450[7] = 0x30;
    local_450[8] = 0x30;
    local_447 = 0x30303030303030;
    uStack_440 = 0x30;
    local_43f = 0;
    pbVar9 = (byte *)((long)param_2 + 0x34);
    do {
      bVar4 = *pbVar9;
      bVar2 = bVar4 >> 4 | 0x30;
      if (0x9f < bVar4) {
        bVar2 = (bVar4 >> 4) + 0x57;
      }
      *(byte *)(((ulong)local_450 | 1) + lVar10) = bVar2;
      bVar2 = bVar4 & 0xf | 0x30;
      if (9 < (bVar4 & 0xf)) {
        bVar2 = (bVar4 & 0xf) + 0x57;
      }
      lVar1 = ((ulong)local_450 | 1) + lVar10;
      lVar10 = lVar10 + 2;
      *(byte *)(lVar1 + 1) = bVar2;
      pbVar9 = pbVar9 + 1;
    } while (lVar10 != 0x10);
  }
  uVar3 = (ulong)(local_450[0] >> 1);
  pcVar7 = (char *)((ulong)local_450 | 1);
  if ((local_450[0] & 1) != 0) {
    uVar3 = CONCAT71(local_447,local_450[8]);
    pcVar7 = (char *)CONCAT62(uStack_43e,CONCAT11(local_43f,uStack_440));
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  append(param_1,pcVar7,uVar3);
  if ((local_450[0] & 1) != 0) {
    operator_delete((void *)CONCAT62(uStack_43e,CONCAT11(local_43f,uStack_440)));
  }
  pcVar7 = "";
  if ((*(uint *)(param_2 + 4) & 0x100) != 0) {
    pcVar7 = ", Retargetable=Yes";
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  append(param_1,pcVar7);
  iVar6 = strcmp((char *)*param_2,"WindowsRuntimeMetadata");
  if (iVar6 == 0) {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    append(param_1,", ContentType=WindowsRuntime");
  }
  if (*(long *)(lVar5 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

