// rea decompile_all
// name: FUN_03fe95bc
// address: 0x3fe95bc
// body: available
// range: 0x3fe95bc-0x3fe97f3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x3fe96d0 to 0x3f5d118 FUN_03f5d118 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x3fe976c to 0x3f695f8 FUN_03f695f8 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x3fe97f0 to 0x404c2dc FUN_0404c2dc (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_03fe95bc(byte *param_1,byte *param_2,long *param_3,int param_4)

{
  ulong uVar1;
  wchar_t *__nptr;
  size_t sVar2;
  int iVar3;
  int iVar4;
  byte bVar5;
  int *piVar6;
  undefined8 uVar7;
  byte *pbVar8;
  void *pvVar9;
  void *pvVar10;
  wchar_t *local_60;
  ulong local_58;
  ulong local_50;
  void *local_48;
  
  local_60 = (wchar_t *)0x0;
  __nptr = (wchar_t *)(param_2 + 4);
  if ((*param_2 & 1) != 0) {
    __nptr = *(wchar_t **)(param_2 + 0x10);
  }
  piVar6 = (int *)__errno();
  iVar3 = *piVar6;
  *piVar6 = 0;
  wcstol(__nptr,&local_60,param_4);
  iVar4 = *piVar6;
  *piVar6 = iVar3;
  if (iVar4 == 0x22) {
    bVar5 = *param_1;
    sVar2 = (ulong)(bVar5 >> 1);
    if ((bVar5 & 1) != 0) {
      sVar2 = *(size_t *)(param_1 + 8);
    }
    uVar1 = sVar2 + 0xe;
    if (0xffffffffffffffef < uVar1) goto LAB_03fe96cc;
    if (uVar1 < 0x17) {
      local_50 = 0;
      pvVar9 = (void *)((ulong)&local_58 | 1);
      local_48 = (void *)0x0;
      local_58 = (ulong)(byte)((int)uVar1 << 1);
      pvVar10 = pvVar9;
      if (sVar2 == 0) goto LAB_03fe973c;
    }
    else {
      pvVar9 = operator_new((uVar1 | 0xf) + 1);
      local_58 = (uVar1 | 0xf) + 2;
      pvVar10 = (void *)((ulong)&local_58 | 1);
      local_50 = uVar1;
      local_48 = pvVar9;
    }
    pbVar8 = *(byte **)(param_1 + 0x10);
    if ((bVar5 & 1) == 0) {
      pbVar8 = param_1 + 1;
    }
    memmove(pvVar9,pbVar8,sVar2);
LAB_03fe973c:
    builtin_strncpy((char *)((long)pvVar9 + sVar2),": out of range",0xf);
    if ((local_58 & 1) != 0) {
      pvVar10 = local_48;
    }
                    /* WARNING: Subroutine does not return */
    FUN_03f695f8(pvVar10);
  }
  if ((long)local_60 - (long)__nptr != 0) {
    if (param_3 != (long *)0x0) {
      *param_3 = (long)local_60 - (long)__nptr >> 2;
    }
    return;
  }
  bVar5 = *param_1;
  sVar2 = (ulong)(bVar5 >> 1);
  if ((bVar5 & 1) != 0) {
    sVar2 = *(size_t *)(param_1 + 8);
  }
  uVar1 = sVar2 + 0xf;
  if (0xffffffffffffffef < uVar1) {
LAB_03fe96cc:
                    /* WARNING: Subroutine does not return */
    FUN_03f5d118(&local_58);
  }
  if (uVar1 < 0x17) {
    local_50 = 0;
    pvVar9 = (void *)((ulong)&local_58 | 1);
    local_48 = (void *)0x0;
    local_58 = (ulong)(byte)((int)uVar1 << 1);
    pvVar10 = pvVar9;
    if (sVar2 == 0) goto LAB_03fe97ac;
  }
  else {
    pvVar9 = operator_new((uVar1 | 0xf) + 1);
    local_58 = (uVar1 | 0xf) + 2;
    pvVar10 = (void *)((ulong)&local_58 | 1);
    local_50 = uVar1;
    local_48 = pvVar9;
  }
  pbVar8 = *(byte **)(param_1 + 0x10);
  if ((bVar5 & 1) == 0) {
    pbVar8 = param_1 + 1;
  }
  memmove(pvVar9,pbVar8,sVar2);
LAB_03fe97ac:
  builtin_strncpy((char *)((long)pvVar9 + sVar2),": no conversion",0x10);
  if ((local_58 & 1) != 0) {
    pvVar10 = local_48;
  }
  uVar7 = FUN_03fe9530(pvVar10);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  ~basic_string((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                &local_58);
                    /* WARNING: Subroutine does not return */
  FUN_0404c2dc(uVar7);
}

