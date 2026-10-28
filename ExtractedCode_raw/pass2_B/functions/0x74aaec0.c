// rea decompile_all
// name: System.Runtime.Serialization.SerializationEvents$$GetMethodsWithAttribute
// address: 0x74aaec0
// body: available
// range: 0x74aaec0-0x74ab0e7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x74ab0e0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74ab0e4 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long System_Runtime_Serialization_SerializationEvents__GetMethodsWithAttribute
               (undefined8 param_1,undefined8 param_2,long *param_3)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  uint uVar10;
  
  if ((DAT_095213ed & 1) == 0) {
    FUN_03f5c2a4(&DAT_091ae880);
    FUN_03f5c2a4(&DAT_091ae898);
    FUN_03f5c2a4(&DAT_091ae870);
    FUN_03f5c2a4(&DAT_0917c770);
    DAT_095213ed = 1;
  }
  lVar8 = 0;
  do {
    if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar3 = System_Type__op_Inequality(param_3,0,0);
    lVar5 = DAT_095353e8;
    if ((uVar3 & 1) == 0) {
LAB_074ab0b0:
      if (lVar8 != 0) {
        FUN_057e2674(lVar8,DAT_091ae898);
      }
      return lVar8;
    }
    if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar4 = System_Type__GetTypeFromHandle(lVar5 + 0x20,0);
    uVar3 = System_Type__op_Inequality(param_3,uVar4,0);
    if ((uVar3 & 1) == 0) goto LAB_074ab0b0;
    if (param_3 == (long *)0x0) {
LAB_074ab0e0:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar5 = (**(code **)(*param_3 + 0x7d8))(param_3,0x36,*(undefined8 *)(*param_3 + 0x7e0));
    if (lVar5 == 0) goto LAB_074ab0e0;
    uVar1 = *(uint *)(lVar5 + 0x18);
    if (0 < (int)uVar1) {
      uVar10 = 0;
      do {
        if (uVar1 <= uVar10) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c558();
        }
        plVar9 = *(long **)(lVar5 + (long)(int)uVar10 * 8 + 0x20);
        if (plVar9 == (long *)0x0) goto LAB_074ab0e0;
        uVar3 = (**(code **)(*plVar9 + 0x1f8))(plVar9,param_2,0,*(undefined8 *)(*plVar9 + 0x200));
        if ((uVar3 & 1) != 0) {
          if (lVar8 == 0) {
            lVar8 = thunk_FUN_03f9944c(DAT_0917c770);
            FUN_057e0400(lVar8,DAT_091ae870);
            if (lVar8 == 0) goto LAB_074ab0e0;
          }
          lVar2 = DAT_091ae880;
          lVar7 = *(long *)(lVar8 + 0x10);
          *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
          if (lVar7 == 0) goto LAB_074ab0e0;
          uVar1 = *(uint *)(lVar8 + 0x18);
          if (uVar1 < *(uint *)(lVar7 + 0x18)) {
            *(uint *)(lVar8 + 0x18) = uVar1 + 1;
            puVar6 = (undefined8 *)(lVar7 + (long)(int)uVar1 * 8 + 0x20);
            *puVar6 = plVar9;
            thunk_FUN_03f5d7b8(puVar6,plVar9);
          }
          else {
            FUN_057e0c68(lVar8,plVar9,
                         *(undefined8 *)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
          }
        }
        uVar1 = *(uint *)(lVar5 + 0x18);
        uVar10 = uVar10 + 1;
      } while ((int)uVar10 < (int)uVar1);
    }
    param_3 = (long *)(**(code **)(*param_3 + 0x8a8))(param_3,*(undefined8 *)(*param_3 + 0x8b0));
  } while( true );
}

