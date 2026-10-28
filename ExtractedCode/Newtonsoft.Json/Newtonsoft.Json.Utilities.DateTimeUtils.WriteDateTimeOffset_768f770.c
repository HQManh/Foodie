// rea decompile_all
// name: Newtonsoft.Json.Utilities.DateTimeUtils$$WriteDateTimeOffset
// address: 0x768f770
// body: available
// range: 0x768f770-0x768f923 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x768f91c to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x768f920 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int Newtonsoft_Json_Utilities_DateTimeUtils__WriteDateTimeOffset
              (long param_1,uint param_2,long param_3,int param_4)

{
  long lVar1;
  int iVar2;
  int iVar3;
  undefined2 uVar4;
  uint uVar5;
  long local_48;
  
  local_48 = param_3;
  if ((DAT_09522593 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091835c0);
    FUN_03f5c2a4(&DAT_09187e80);
    FUN_03f5c2a4(&DAT_0918bd60);
    DAT_09522593 = 1;
  }
  if (*(int *)(DAT_0918bd60 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar4 = 0x2b;
  if (param_3 < 0) {
    uVar4 = 0x2d;
  }
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  if (param_2 < *(uint *)(param_1 + 0x18)) {
    iVar3 = *(int *)(DAT_0918bd60 + 0xe4);
    *(undefined2 *)(param_1 + (long)(int)param_2 * 2 + 0x20) = uVar4;
    if (iVar3 == 0) {
      FUN_03f5c424();
    }
    iVar3 = System_TimeSpan__get_Hours(&local_48,0);
    if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
      FUN_03f5c424(DAT_09187e80);
    }
    iVar2 = -iVar3;
    if (-1 < iVar3) {
      iVar2 = iVar3;
    }
    if (*(int *)(DAT_091835c0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    Newtonsoft_Json_Utilities_DateTimeUtils__CopyIntToCharArray(param_1,param_2 + 1,iVar2,2);
    uVar5 = param_2 + 3;
    if (param_4 == 0) {
      if (*(uint *)(param_1 + 0x18) <= uVar5) goto LAB_0768f91c;
      lVar1 = (long)(int)uVar5;
      uVar5 = param_2 + 4;
      *(undefined2 *)(param_1 + lVar1 * 2 + 0x20) = 0x3a;
    }
    if (*(int *)(DAT_0918bd60 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    iVar3 = System_TimeSpan__get_Minutes(&local_48,0);
    if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
      FUN_03f5c424(DAT_09187e80);
    }
    if (*(int *)(DAT_091835c0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    iVar2 = -iVar3;
    if (-1 < iVar3) {
      iVar2 = iVar3;
    }
    Newtonsoft_Json_Utilities_DateTimeUtils__CopyIntToCharArray(param_1,uVar5,iVar2,2);
    return uVar5 + 2;
  }
LAB_0768f91c:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c558();
}

