// rea decompile_all
// name: System.Runtime.Remoting.SingleCallIdentity$$SyncObjectProcessMessage
// address: 0x748bcc4
// body: available
// range: 0x748bcc4-0x748bee7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x748bec4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x748becc to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x748bed8 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x748bee4 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
System_Runtime_Remoting_SingleCallIdentity__SyncObjectProcessMessage
          (long param_1,undefined8 param_2)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  
  if ((DAT_095212ba & 1) == 0) {
    FUN_03f5c2a4(&DAT_09185a58);
    FUN_03f5c2a4(&DAT_09186090);
    FUN_03f5c2a4(&DAT_09187de0);
    DAT_095212ba = 1;
  }
  plVar1 = (long *)System_Activator__CreateInstance(*(undefined8 *)(param_1 + 0x48),1,0);
  if (plVar1 != (long *)0x0) {
    if ((*(byte *)(*plVar1 + 0x130) < *(byte *)(DAT_09187de0 + 0x130)) ||
       (*(long *)(*(long *)(*plVar1 + 200) + (ulong)*(byte *)(DAT_09187de0 + 0x130) * 8 + -8) !=
        DAT_09187de0)) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c8d0(plVar1);
    }
    lVar2 = System_MarshalByRefObject__get_ObjectIdentity(plVar1,0);
    if (lVar2 == 0) {
      System_MarshalByRefObject__set_ObjectIdentity(plVar1,param_1,0);
    }
    if ((*(long *)(param_1 + 0x60) != 0) &&
       (plVar3 = (long *)System_Runtime_Remoting_Contexts_Context__CreateServerObjectSinkChain
                                   (*(long *)(param_1 + 0x60),plVar1,0,0), plVar3 != (long *)0x0)) {
      lVar2 = *plVar3;
      uVar8 = (ulong)*(ushort *)(lVar2 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == DAT_09186090) {
            puVar4 = (undefined8 *)(lVar2 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_0748bdf8;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar4 = (undefined8 *)FUN_03f95da8(plVar3,DAT_09186090,0);
LAB_0748bdf8:
      uVar5 = (*(code *)*puVar4)(plVar3,param_2,puVar4[1]);
      lVar6 = thunk_FUN_03f99350(plVar1,DAT_09185a58);
      lVar2 = DAT_09185a58;
      if (lVar6 != 0) {
        lVar7 = thunk_FUN_03f99350(plVar1,DAT_09185a58);
        lVar6 = DAT_09185a58;
        if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c8d0(plVar1,lVar2);
        }
        plVar3 = (long *)thunk_FUN_03f99350(plVar1,DAT_09185a58);
        if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c8d0(plVar1,lVar6);
        }
        lVar2 = *plVar3;
        uVar8 = (ulong)*(ushort *)(lVar2 + 0x12e);
        if (uVar8 != 0) {
          piVar9 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == lVar6) {
              puVar4 = (undefined8 *)(lVar2 + (long)*piVar9 * 0x10 + 0x138);
              goto LAB_0748bea4;
            }
            uVar8 = uVar8 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar8 != 0);
        }
        puVar4 = (undefined8 *)FUN_03f95da8(plVar3,lVar6,0);
LAB_0748bea4:
        (*(code *)*puVar4)(plVar3,puVar4[1]);
      }
      return uVar5;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

