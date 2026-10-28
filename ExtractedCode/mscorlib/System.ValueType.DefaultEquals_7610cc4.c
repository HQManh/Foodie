// rea decompile_all
// name: System.ValueType$$DefaultEquals
// address: 0x7610cc4
// body: available
// range: 0x7610cc4-0x7610e77 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7610e44 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7610e64 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7610e6c to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7610e74 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


byte System_ValueType__DefaultEquals(long param_1,long param_2)

{
  uint uVar1;
  byte bVar2;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  uint uVar8;
  long local_38;
  
  if ((DAT_09522049 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0918a400);
    DAT_09522049 = 1;
  }
  local_38 = 0;
  bVar2 = param_1 == 0 && param_2 == 0;
  if ((param_1 != 0) && (param_2 != 0)) {
    plVar3 = (long *)System_Object__GetType(param_1,0);
    plVar4 = (long *)System_Object__GetType(param_2,0);
    if (plVar4 != (long *)0x0) {
      if ((*(byte *)(*plVar4 + 0x130) < *(byte *)(DAT_0918a400 + 0x130)) ||
         (*(long *)(*(long *)(*plVar4 + 200) + (ulong)*(byte *)(DAT_0918a400 + 0x130) * 8 + -8) !=
          DAT_0918a400)) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c8d0(plVar4);
      }
    }
    if (*(int *)(DAT_0918a400 + 0xe4) == 0) {
      FUN_03f5c424(DAT_0918a400);
    }
    if (plVar3 != (long *)0x0) {
      if ((*(byte *)(*plVar3 + 0x130) < *(byte *)(DAT_0918a400 + 0x130)) ||
         (*(long *)(*(long *)(*plVar3 + 200) + (ulong)*(byte *)(DAT_0918a400 + 0x130) * 8 + -8) !=
          DAT_0918a400)) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c8d0(plVar3);
      }
    }
    uVar5 = System_RuntimeType__op_Inequality(plVar3,plVar4,0);
    if ((uVar5 & 1) == 0) {
      bVar2 = FUN_03f735fc(param_1,param_2,&local_38);
      if (local_38 != 0) {
        uVar8 = 0;
        lVar7 = local_38;
        while( true ) {
          uVar1 = *(uint *)(lVar7 + 0x18);
          bVar2 = (int)uVar1 <= (int)uVar8;
          if ((int)uVar1 <= (int)uVar8) break;
          if ((uVar1 <= uVar8) || (uVar1 <= uVar8 + 1)) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c558();
          }
          plVar3 = *(long **)(lVar7 + (long)(int)uVar8 * 8 + 0x20);
          lVar6 = *(long *)(lVar7 + (long)(int)(uVar8 + 1) * 8 + 0x20);
          if (plVar3 == (long *)0x0) {
            if (lVar6 != 0) break;
          }
          else {
            uVar5 = (**(code **)(*plVar3 + 0x138))(plVar3,lVar6,*(undefined8 *)(*plVar3 + 0x140));
            lVar7 = local_38;
            if ((uVar5 & 1) == 0) break;
          }
          uVar8 = uVar8 + 2;
          if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
        }
      }
    }
    else {
      bVar2 = 0;
    }
  }
  return bVar2 & 1;
}

