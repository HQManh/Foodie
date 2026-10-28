// rea decompile_all
// name: System.DelegateSerializationHolder$$.ctor
// address: 0x7601b88
// body: available
// range: 0x7601b88-0x7601d9f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7601d80 to 0x3f5c248 thunk_FUN_03f5d7b8 (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x7601d84 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7601d88 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7601d94 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7601d9c to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_DelegateSerializationHolder___ctor(long param_1,long param_2)

{
  uint uVar1;
  undefined8 uVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  uint uVar7;
  ulong uVar8;
  ulong uVar9;
  long *plVar10;
  
  if ((DAT_09521fdb & 1) == 0) {
    FUN_03f5c2a4(&DAT_09173918);
    FUN_03f5c2a4(&DAT_091900f0);
    FUN_03f5c2a4(&DAT_0917fe58);
    FUN_03f5c2a4(&DAT_09200600);
    DAT_09521fdb = 1;
  }
  uVar2 = DAT_09173918;
  if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar2 = System_Type__GetTypeFromHandle(uVar2,0);
  if (param_2 == 0) {
LAB_07601d84:
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  plVar3 = (long *)System_Runtime_Serialization_SerializationInfo__GetValue
                             (param_2,DAT_09200600,uVar2,0);
  if (plVar3 == (long *)0x0) {
    plVar6 = (long *)FUN_03f5c394(DAT_0917fe58,0);
  }
  else {
    if ((*(byte *)(*plVar3 + 0x130) < *(byte *)(DAT_091900f0 + 0x130)) ||
       (*(long *)(*(long *)(*plVar3 + 200) + (ulong)*(byte *)(DAT_091900f0 + 0x130) * 8 + -8) !=
        DAT_091900f0)) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c8d0(plVar3);
    }
    plVar6 = plVar3;
    uVar1 = 0xffffffff;
    do {
      uVar7 = uVar1;
      plVar6 = (long *)plVar6[8];
      uVar1 = uVar7 + 1;
    } while (plVar6 != (long *)0x0);
    if (uVar1 == 0) {
      if (plVar3 == (long *)0x0) goto LAB_07601d84;
      uVar2 = System_DelegateSerializationHolder_DelegateEntry__DeserializeDelegate
                        (plVar3,param_2,0);
      goto LAB_07601d60;
    }
    uVar8 = (ulong)(uVar7 + 2);
    plVar6 = (long *)FUN_03f5c394(DAT_0917fe58,uVar8);
    if (uVar1 < 0x7fffffff) {
      uVar9 = 0;
      plVar10 = plVar6 + 4;
      do {
        if ((plVar3 == (long *)0x0) ||
           (lVar4 = System_DelegateSerializationHolder_DelegateEntry__DeserializeDelegate
                              (plVar3,param_2,uVar9 & 0xffffffff), plVar6 == (long *)0x0))
        goto LAB_07601d84;
        if ((lVar4 != 0) &&
           (lVar5 = thunk_FUN_03f99350(lVar4,*(undefined8 *)(*plVar6 + 0x40)), lVar5 == 0)) {
          uVar2 = thunk_FUN_03fa6ef4();
                    /* WARNING: Subroutine does not return */
          FUN_03f5c414(uVar2,0);
        }
        if (*(uint *)(plVar6 + 3) <= uVar9) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c558();
        }
        *plVar10 = lVar4;
        thunk_FUN_03f5d7b8(plVar10,lVar4);
        uVar9 = uVar9 + 1;
        plVar3 = (long *)plVar3[8];
        plVar10 = plVar10 + 1;
      } while (uVar8 != uVar9);
    }
  }
  uVar2 = System_Delegate__Combine(plVar6);
LAB_07601d60:
  *(undefined8 *)(param_1 + 0x10) = uVar2;
  thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x10),uVar2);
  return;
}

