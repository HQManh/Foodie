// rea decompile_all
// name: Coffee.UIExtensions.UIParticleRenderer$$AddRenderer
// address: 0x4402228
// body: available
// range: 0x4402228-0x44024d7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x44024c4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44024c8 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44024d4 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long Coffee_UIExtensions_UIParticleRenderer__AddRenderer(long param_1,undefined4 param_2)

{
  undefined4 uVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined4 *puVar6;
  long lVar7;
  
  if ((DAT_09517e90 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091cdab0);
    FUN_03f5c2a4(&DAT_09184b68);
    FUN_03f5c2a4(&DAT_09180748);
    FUN_03f5c2a4(&DAT_09173300);
    FUN_03f5c2a4(&DAT_09214550);
    DAT_09517e90 = 1;
  }
  plVar2 = (long *)FUN_03f5c394(DAT_09180748,1);
  uVar5 = DAT_09173300;
  if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
    FUN_03f5c424(DAT_095354b8);
  }
  lVar3 = System_Type__GetTypeFromHandle(uVar5,0);
  if (plVar2 != (long *)0x0) {
    if ((lVar3 != 0) &&
       (lVar4 = thunk_FUN_03f99350(lVar3,*(undefined8 *)(*plVar2 + 0x40)), lVar4 == 0)) {
      uVar5 = thunk_FUN_03fa6ef4();
                    /* WARNING: Subroutine does not return */
      FUN_03f5c414(uVar5,0);
    }
    if ((int)plVar2[3] == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c558();
    }
    plVar2[4] = lVar3;
    thunk_FUN_03f5d7b8(plVar2 + 4,lVar3);
    lVar3 = thunk_FUN_03f9944c(DAT_09184b68);
    UnityEngine_GameObject___ctor(lVar3,DAT_09214550,plVar2,0);
    uVar1 = Coffee_UIExtensions_UIParticleProjectSettings__get_globalHideFlags();
    if (((lVar3 != 0) && (UnityEngine_Object__set_hideFlags(lVar3,uVar1,0), param_1 != 0)) &&
       (lVar4 = UnityEngine_Component__get_gameObject(param_1,0), lVar4 != 0)) {
      uVar1 = UnityEngine_GameObject__get_layer(lVar4,0);
      UnityEngine_GameObject__set_layer(lVar3,uVar1,0);
      lVar4 = UnityEngine_GameObject__get_transform(lVar3,0);
      uVar5 = UnityEngine_Component__get_transform(param_1,0);
      if (lVar4 != 0) {
        UnityEngine_Transform__SetParent(lVar4,uVar5,0,0);
        if (DAT_09515ce6 == '\0') {
          FUN_03f5c2a4(&DAT_0918cbd0);
          DAT_09515ce6 = '\x01';
        }
        puVar6 = *(undefined4 **)(DAT_0918cbd0 + 0xb8);
        UnityEngine_Transform__set_localPosition(*puVar6,puVar6[1],puVar6[2],lVar4,0);
        if (DAT_09515ed5 == '\0') {
          FUN_03f5c2a4(&DAT_091898c0);
          DAT_09515ed5 = '\x01';
        }
        puVar6 = *(undefined4 **)(DAT_091898c0 + 0xb8);
        UnityEngine_Transform__set_localRotation(*puVar6,puVar6[1],puVar6[2],puVar6[3],lVar4,0);
        if (DAT_09515cf3 == '\0') {
          FUN_03f5c2a4(&DAT_0918cbd0);
          DAT_09515cf3 = '\x01';
        }
        lVar7 = *(long *)(DAT_0918cbd0 + 0xb8);
        UnityEngine_Transform__set_localScale
                  (*(undefined4 *)(lVar7 + 0xc),*(undefined4 *)(lVar7 + 0x10),
                   *(undefined4 *)(lVar7 + 0x14),lVar4,0);
        lVar3 = FUN_04b7c324(lVar3,DAT_091cdab0);
        if (lVar3 != 0) {
          *(long *)(lVar3 + 0x110) = param_1;
          thunk_FUN_03f5d7b8(lVar3 + 0x110,param_1);
          *(undefined4 *)(lVar3 + 0xdc) = param_2;
          return lVar3;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

