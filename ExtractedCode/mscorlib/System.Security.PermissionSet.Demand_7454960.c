// rea decompile_all
// name: System.Security.PermissionSet$$Demand
// address: 0x7454960
// body: available
// range: 0x7454960-0x7454b97 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7454b84 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7454b90 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7454b94 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_Security_PermissionSet__Demand(long param_1)

{
  uint uVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  undefined8 uVar8;
  ulong uVar9;
  undefined8 *puVar10;
  int *piVar11;
  
  if ((DAT_09521111 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0917fc40);
    FUN_03f5c2a4(&DAT_091711c0);
    FUN_03f5c2a4(&DAT_09186288);
    DAT_09521111 = 1;
  }
  uVar2 = System_Security_PermissionSet__IsEmpty(param_1);
  if ((uVar2 & 1) == 0) {
    plVar3 = *(long **)(param_1 + 0x18);
    if (plVar3 == (long *)0x0) {
LAB_07454b84:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    uVar1 = (**(code **)(*plVar3 + 0x298))(plVar3,*(undefined8 *)(*plVar3 + 0x2a0));
    plVar3 = (long *)(param_1 + 0x28);
    if ((*plVar3 == 0) || (uVar1 != *(uint *)(*plVar3 + 0x18))) {
      lVar4 = FUN_03f5c394(DAT_0917fc40,uVar1);
      *plVar3 = lVar4;
      thunk_FUN_03f5d7b8(plVar3,lVar4);
    }
    if (0 < (int)uVar1) {
      uVar2 = 0;
      do {
        plVar5 = *(long **)(param_1 + 0x18);
        if (plVar5 == (long *)0x0) goto LAB_07454b84;
        lVar6 = (**(code **)(*plVar5 + 0x2e8))
                          (plVar5,uVar2 & 0xffffffff,*(undefined8 *)(*plVar5 + 0x2f0));
        lVar4 = DAT_09186288;
        if (lVar6 == 0) goto LAB_07454b84;
        plVar5 = (long *)thunk_FUN_03f99350(lVar6,DAT_09186288);
        if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c8d0(lVar6,lVar4);
        }
        plVar7 = (long *)System_Object__GetType(plVar5,0);
        uVar8 = DAT_091711c0;
        if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
          FUN_03f5c424(DAT_095354b8);
        }
        uVar8 = System_Type__GetTypeFromHandle(uVar8,0);
        if (plVar7 == (long *)0x0) goto LAB_07454b84;
        uVar9 = (**(code **)(*plVar7 + 0x2a8))(plVar7,uVar8,*(undefined8 *)(*plVar7 + 0x2b0));
        lVar4 = DAT_09186288;
        lVar6 = *plVar3;
        if ((uVar9 & 1) == 0) {
          if (lVar6 == 0) goto LAB_07454b84;
          if (*(uint *)(lVar6 + 0x18) <= uVar2) goto LAB_07454b94;
          *(undefined1 *)(lVar6 + uVar2 + 0x20) = 1;
          lVar6 = *plVar5;
          uVar9 = (ulong)*(ushort *)(lVar6 + 0x12e);
          if (uVar9 != 0) {
            piVar11 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
            do {
              if (*(long *)(piVar11 + -2) == lVar4) {
                puVar10 = (undefined8 *)(lVar6 + (long)*piVar11 * 0x10 + 0x138);
                goto LAB_07454b50;
              }
              uVar9 = uVar9 - 1;
              piVar11 = piVar11 + 4;
            } while (uVar9 != 0);
          }
          puVar10 = (undefined8 *)FUN_03f95da8(plVar5,lVar4,0);
LAB_07454b50:
          (*(code *)*puVar10)(plVar5,puVar10[1]);
        }
        else {
          if (lVar6 == 0) goto LAB_07454b84;
          if (*(uint *)(lVar6 + 0x18) <= uVar2) {
LAB_07454b94:
                    /* WARNING: Subroutine does not return */
            FUN_03f5c558();
          }
          *(undefined1 *)(lVar6 + uVar2 + 0x20) = 0;
        }
        uVar2 = uVar2 + 1;
      } while (uVar2 != uVar1);
    }
  }
  return;
}

