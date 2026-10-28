// rea decompile_all
// name: System.Globalization.UmAlQuraCalendar$$ConvertGregorianToHijri
// address: 0x753a570
// body: available
// range: 0x753a570-0x753a85b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x753a854 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x753a858 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_Globalization_UmAlQuraCalendar__ConvertGregorianToHijri
               (undefined8 param_1,int *param_2,int *param_3,int *param_4)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  int iVar6;
  undefined8 uVar7;
  double dVar8;
  double dVar9;
  undefined8 local_60;
  undefined8 local_58;
  
  local_58 = param_1;
  if ((DAT_095218c1 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09183548);
    FUN_03f5c2a4(&DAT_0918bd60);
    FUN_03f5c2a4(&DAT_0918c5c0);
    DAT_095218c1 = 1;
  }
  local_60 = 0;
  if (*(int *)(DAT_09183548 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  lVar3 = System_DateTime__get_Ticks(&local_58,0);
  if (*(int *)(DAT_0918c5c0 + 0xe4) == 0) {
    FUN_03f5c424(DAT_0918c5c0);
  }
  lVar4 = System_DateTime__get_Ticks(*(long *)(DAT_0918c5c0 + 0xb8) + 8,0);
  lVar3 = lVar3 - lVar4;
  uVar1 = (((int)(lVar3 / 864000000000) + (int)(lVar3 >> 0x3f)) -
          (SUB164(SEXT816(lVar3) * ZEXT816(0xa2e3ff1de20581e3),0xc) >> 0x1f)) / 0x163;
  do {
    uVar5 = uVar1;
    if (*(int *)(DAT_0918c5c0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    lVar3 = **(long **)(DAT_0918c5c0 + 0xb8);
    if (lVar3 == 0) goto LAB_0753a854;
    uVar1 = uVar5 + 1;
    if (*(uint *)(lVar3 + 0x18) <= uVar1) goto LAB_0753a858;
    uVar7 = *(undefined8 *)(lVar3 + (long)(int)uVar1 * 0x10 + 0x28);
    if (*(int *)(DAT_09183548 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    iVar2 = System_DateTime__CompareTo(&local_58,uVar7,0);
  } while (0 < iVar2);
  if (*(int *)(DAT_0918c5c0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  lVar3 = **(long **)(DAT_0918c5c0 + 0xb8);
  if (lVar3 != 0) {
    if (uVar1 < *(uint *)(lVar3 + 0x18)) {
      uVar7 = *(undefined8 *)(lVar3 + (long)(int)uVar1 * 0x10 + 0x28);
      if (*(int *)(DAT_09183548 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      iVar2 = System_DateTime__CompareTo(&local_58,uVar7,0);
      if (iVar2 != 0) {
        uVar1 = uVar5;
      }
      if (*(int *)(DAT_0918c5c0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      lVar3 = **(long **)(DAT_0918c5c0 + 0xb8);
      if (lVar3 == 0) goto LAB_0753a854;
      if (uVar1 < *(uint *)(lVar3 + 0x18)) {
        uVar7 = *(undefined8 *)(lVar3 + (long)(int)uVar1 * 0x10 + 0x28);
        if (*(int *)(DAT_09183548 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        local_60 = System_DateTime__Subtract(&local_58,uVar7,0);
        if (*(int *)(DAT_0918bd60 + 0xe4) == 0) {
          FUN_03f5c424(DAT_0918bd60);
        }
        dVar8 = (double)System_TimeSpan__get_TotalDays(&local_60,0);
        lVar3 = **(long **)(DAT_0918c5c0 + 0xb8);
        if (lVar3 == 0) goto LAB_0753a854;
        if (uVar1 < *(uint *)(lVar3 + 0x18)) {
          uVar5 = *(uint *)(lVar3 + (long)(int)uVar1 * 0x10 + 0x20);
          dVar9 = (double)((uVar5 & 1) + 0x1d);
          iVar2 = 1;
          if (dVar9 <= dVar8) {
            do {
              uVar5 = (int)uVar5 >> 1;
              dVar8 = dVar8 - dVar9;
              iVar2 = iVar2 + 1;
              dVar9 = (double)((uVar5 & 1) + 0x1d);
            } while (dVar9 <= dVar8);
          }
          iVar6 = -0x7fffffff;
          if (dVar8 != INFINITY) {
            iVar6 = (int)dVar8 + 1;
          }
          *param_4 = iVar6;
          *param_3 = iVar2;
          *param_2 = uVar1 + 0x526;
          return;
        }
      }
    }
LAB_0753a858:
                    /* WARNING: Subroutine does not return */
    FUN_03f5c558();
  }
LAB_0753a854:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

