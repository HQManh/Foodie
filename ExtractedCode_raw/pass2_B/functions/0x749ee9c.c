// rea decompile_all
// name: System.Runtime.Remoting.Messaging.CADMessageBase$$GetSignature
// address: 0x749ee9c
// body: available
// range: 0x749ee9c-0x749f06b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x749f058 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x749f05c to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x749f068 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long * System_Runtime_Remoting_Messaging_CADMessageBase__GetSignature(long *param_1,ulong param_2)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long *plVar8;
  ulong uVar9;
  
  if ((DAT_09521370 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c4500);
    FUN_03f5c2a4(&DAT_09180748);
    FUN_03f5c2a4(&DAT_091dc130);
    DAT_09521370 = 1;
  }
  if ((param_1 != (long *)0x0) &&
     (lVar1 = (**(code **)(*param_1 + 600))(param_1,*(undefined8 *)(*param_1 + 0x260)), lVar1 != 0))
  {
    plVar2 = (long *)FUN_03f5c394(DAT_09180748,*(undefined4 *)(lVar1 + 0x18));
    if (0 < (int)*(ulong *)(lVar1 + 0x18)) {
      uVar9 = 0;
      uVar7 = *(ulong *)(lVar1 + 0x18) & 0xffffffff;
      plVar8 = plVar2 + 4;
      do {
        if ((param_2 & 1) == 0) {
          if (uVar7 <= uVar9) goto LAB_0749f05c;
          plVar3 = *(long **)(lVar1 + 0x20 + uVar9 * 8);
          if (plVar3 == (long *)0x0) goto LAB_0749f058;
          lVar5 = (**(code **)(*plVar3 + 0x1e8))(plVar3,*(undefined8 *)(*plVar3 + 0x1f0));
        }
        else {
          if (uVar7 <= uVar9) goto LAB_0749f05c;
          plVar3 = *(long **)(lVar1 + 0x20 + uVar9 * 8);
          if ((plVar3 == (long *)0x0) ||
             (plVar3 = (long *)(**(code **)(*plVar3 + 0x1e8))
                                         (plVar3,*(undefined8 *)(*plVar3 + 0x1f0)),
             plVar3 == (long *)0x0)) goto LAB_0749f058;
          uVar4 = (**(code **)(*plVar3 + 0x2e8))(plVar3,*(undefined8 *)(*plVar3 + 0x2f0));
          if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
            FUN_03f5c424(DAT_095354b8);
          }
          lVar5 = FUN_03f5c7b8(uVar4,1,DAT_091dc130,DAT_091c4500);
        }
        if (plVar2 == (long *)0x0) goto LAB_0749f058;
        if ((lVar5 != 0) &&
           (lVar6 = thunk_FUN_03f99350(lVar5,*(undefined8 *)(*plVar2 + 0x40)), lVar6 == 0)) {
          uVar4 = thunk_FUN_03fa6ef4();
                    /* WARNING: Subroutine does not return */
          FUN_03f5c414(uVar4,0);
        }
        if (*(uint *)(plVar2 + 3) <= uVar9) {
LAB_0749f05c:
                    /* WARNING: Subroutine does not return */
          FUN_03f5c558();
        }
        *plVar8 = lVar5;
        thunk_FUN_03f5d7b8(plVar8,lVar5);
        uVar7 = (ulong)*(uint *)(lVar1 + 0x18);
        uVar9 = uVar9 + 1;
        plVar8 = plVar8 + 1;
      } while ((long)uVar9 < (long)(int)*(uint *)(lVar1 + 0x18));
    }
    return plVar2;
  }
LAB_0749f058:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

