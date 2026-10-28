// rea decompile_all
// name: Datpt.Cook_Order.BgScaleByCamSize$$OnCameraSizeChange
// address: 0x41a1430
// body: available
// range: 0x41a1430-0x41a15b3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x41a159c to 0x866d690 UnityEngine.Transform$$set_localScale (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x41a15a0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x41a15a4 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x41a15b0 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Datpt_Cook_Order_BgScaleByCamSize__OnCameraSizeChange(long param_1)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  if ((DAT_09516845 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091835f0);
    FUN_03f5c2a4(&DAT_09184238);
    FUN_03f5c2a4(&DAT_09180318);
    FUN_03f5c2a4(&DAT_091fe790);
    FUN_03f5c2a4(&DAT_092093a0);
    DAT_09516845 = 1;
  }
  plVar1 = (long *)FUN_03f5c394(DAT_09180318,1);
  if (plVar1 != (long *)0x0) {
    if ((DAT_091fe790 != 0) &&
       (lVar2 = thunk_FUN_03f99350(DAT_091fe790,*(undefined8 *)(*plVar1 + 0x40)), lVar2 == 0)) {
      uVar3 = thunk_FUN_03fa6ef4();
                    /* WARNING: Subroutine does not return */
      FUN_03f5c414(uVar3,0);
    }
    if ((int)plVar1[3] == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c558();
    }
    plVar1[4] = DAT_091fe790;
    thunk_FUN_03f5d7b8();
    if (*(int *)(DAT_091835f0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    Datpt_DebugCustom__LogColor(plVar1,0);
    lVar2 = *(long *)(param_1 + 0x20);
    if (DAT_09515cf3 == '\0') {
      FUN_03f5c2a4(&DAT_0918cbd0);
      DAT_09515cf3 = '\x01';
    }
    lVar4 = *(long *)(DAT_0918cbd0 + 0xb8);
    fVar7 = *(float *)(lVar4 + 0xc);
    fVar6 = *(float *)(lVar4 + 0x10);
    fVar8 = *(float *)(lVar4 + 0x14);
    if (*(int *)(DAT_09184238 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    fVar5 = (float)Datpt_ObserverPattern_EventManager__GetFloat(DAT_092093a0);
    if (lVar2 != 0) {
      UnityEngine_Transform__set_localScale(fVar7 * fVar5,fVar6 * fVar5,fVar8 * fVar5,lVar2,0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

