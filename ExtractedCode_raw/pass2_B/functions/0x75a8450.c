// rea decompile_all
// name: System.DateTimeParse$$ParseFractionExact
// address: 0x75a8450
// body: available
// range: 0x75a8450-0x75a86b3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x75a86b0 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool System_DateTimeParse__ParseFractionExact(long *param_1,int param_2,double *param_3)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  double dVar6;
  
  if ((DAT_09521c5f & 1) == 0) {
    FUN_03f5c2a4(&DAT_0918db18);
    DAT_09521c5f = 1;
  }
  if (*(int *)(DAT_0918db18 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  if (DAT_09521c74 == '\0') {
    FUN_03f5c2a4(&DAT_091835a8);
    FUN_03f5c2a4(&DAT_0918db18);
    DAT_09521c74 = '\x01';
  }
  iVar2 = *(int *)(DAT_0918db18 + 0xe4);
  iVar3 = (int)param_1[2] + 1;
  *(int *)(param_1 + 2) = iVar3;
  if (iVar2 == 0) {
    FUN_03f5c424();
  }
  iVar2 = System___DTString__get_Length(param_1,0);
  if (iVar3 < iVar2) {
    if (*(uint *)(param_1 + 1) <= *(uint *)(param_1 + 2)) {
LAB_075a86b0:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c558();
    }
    uVar1 = *(ushort *)(*param_1 + (long)(int)*(uint *)(param_1 + 2) * 2);
    if (*(int *)(DAT_091835a8 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    if (uVar1 - 0x30 < 10) {
      if (*(int *)(DAT_0918db18 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      iVar3 = System___DTString__GetDigit(param_1,0);
      dVar6 = (double)iVar3;
      iVar3 = 1;
      *param_3 = dVar6;
      iVar2 = iVar3;
      if (1 < param_2) {
        do {
          if (*(int *)(DAT_0918db18 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          if (DAT_09521c74 == '\0') {
            FUN_03f5c2a4(&DAT_091835a8);
            FUN_03f5c2a4(&DAT_0918db18);
            DAT_09521c74 = '\x01';
          }
          iVar4 = *(int *)(DAT_0918db18 + 0xe4);
          iVar2 = (int)param_1[2] + 1;
          *(int *)(param_1 + 2) = iVar2;
          if (iVar4 == 0) {
            FUN_03f5c424();
          }
          iVar4 = System___DTString__get_Length(param_1,0);
          if (iVar4 <= iVar2) {
LAB_075a8664:
            dVar6 = *param_3;
            *(int *)(param_1 + 2) = (int)param_1[2] + -1;
            iVar2 = iVar3;
            break;
          }
          if (*(uint *)(param_1 + 1) <= *(uint *)(param_1 + 2)) goto LAB_075a86b0;
          uVar1 = *(ushort *)(*param_1 + (long)(int)*(uint *)(param_1 + 2) * 2);
          if (*(int *)(DAT_091835a8 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          if (9 < uVar1 - 0x30) goto LAB_075a8664;
          dVar6 = *param_3;
          if (*(int *)(DAT_0918db18 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          iVar2 = System___DTString__GetDigit(param_1,0);
          iVar3 = iVar3 + 1;
          dVar6 = dVar6 * 10.0 + (double)iVar2;
          *param_3 = dVar6;
          iVar2 = param_2;
        } while (param_2 != iVar3);
      }
      lVar5 = System_Globalization_TimeSpanParse__Pow10(iVar2,0);
      *param_3 = dVar6 / (double)lVar5;
      return iVar2 == param_2;
    }
  }
  *(int *)(param_1 + 2) = (int)param_1[2] + -1;
  return false;
}

