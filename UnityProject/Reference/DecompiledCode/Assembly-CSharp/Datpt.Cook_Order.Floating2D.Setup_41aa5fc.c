// rea decompile_all
// name: Datpt.Cook_Order.Floating2D$$Setup
// address: 0x41aa5fc
// body: available
// range: 0x41aa5fc-0x41aa857 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x41aa850 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x41aa854 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Datpt_Cook_Order_Floating2D__Setup(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined4 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined4 local_38;
  
  if ((DAT_095168ac & 1) == 0) {
    FUN_03f5c2a4(&DAT_09181258);
    FUN_03f5c2a4(&DAT_09180230);
    FUN_03f5c2a4(&DAT_0920d848);
    DAT_095168ac = 1;
  }
  UnityEngine_Behaviour__set_enabled(param_1,0,0);
  lVar1 = UnityEngine_Component__get_transform(param_1,0);
  if (lVar1 != 0) {
    uVar2 = UnityEngine_Transform__Find(lVar1,DAT_0920d848,0);
    *(undefined8 *)(param_1 + 0x48) = uVar2;
    thunk_FUN_03f5d7b8();
    lVar1 = FUN_03f5c394(DAT_09180230,4);
    local_50 = 0;
    uStack_48 = 0;
    local_38 = 0;
    local_40 = 0;
    UnityEngine_Keyframe___ctor(0,0,0,0x3d4ccccd,&local_50,0);
    if (lVar1 != 0) {
      if (*(int *)(lVar1 + 0x18) != 0) {
        *(undefined8 *)(lVar1 + 0x28) = uStack_48;
        *(undefined8 *)(lVar1 + 0x20) = local_50;
        *(undefined4 *)(lVar1 + 0x38) = local_38;
        *(undefined8 *)(lVar1 + 0x30) = local_40;
        local_70 = 0;
        uStack_68 = 0;
        local_58 = 0;
        local_60 = 0;
        UnityEngine_Keyframe___ctor(0x3f800000,0x3d4ccccd,0,0,&local_70,0);
        if ((*(uint *)(lVar1 + 0x18) & 0xfffffffe) != 0) {
          *(undefined4 *)(lVar1 + 0x54) = local_58;
          *(undefined8 *)(lVar1 + 0x44) = uStack_68;
          *(undefined8 *)(lVar1 + 0x3c) = local_70;
          *(undefined8 *)(lVar1 + 0x4c) = local_60;
          local_90 = 0;
          uStack_88 = 0;
          local_78 = 0;
          local_80 = 0;
          UnityEngine_Keyframe___ctor(0x40400000,0xbd4ccccd,0,0,&local_90,0);
          if (2 < *(uint *)(lVar1 + 0x18)) {
            *(undefined8 *)(lVar1 + 0x60) = uStack_88;
            *(undefined8 *)(lVar1 + 0x58) = local_90;
            *(undefined4 *)(lVar1 + 0x70) = local_78;
            *(undefined8 *)(lVar1 + 0x68) = local_80;
            local_b0 = 0;
            uStack_a8 = 0;
            local_98 = 0;
            local_a0 = 0;
            UnityEngine_Keyframe___ctor(0x40800000,0,0,0xbd4ccccd,&local_b0,0);
            if ((*(uint *)(lVar1 + 0x18) & 0xfffffffc) != 0) {
              *(undefined4 *)(lVar1 + 0x8c) = local_98;
              *(undefined8 *)(lVar1 + 0x84) = local_a0;
              *(undefined8 *)(lVar1 + 0x7c) = uStack_a8;
              *(undefined8 *)(lVar1 + 0x74) = local_b0;
              lVar3 = thunk_FUN_03f9944c(DAT_09181258);
              UnityEngine_AnimationCurve___ctor(lVar3,lVar1,0);
              plVar4 = (long *)(param_1 + 0x50);
              *plVar4 = lVar3;
              thunk_FUN_03f5d7b8(plVar4,lVar3);
              if (*plVar4 != 0) {
                UnityEngine_AnimationCurve__set_postWrapMode(*plVar4,2,0);
                if (*plVar4 != 0) {
                  UnityEngine_AnimationCurve__set_preWrapMode(*plVar4,2,0);
                  return;
                }
              }
              goto LAB_041aa854;
            }
          }
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_03f5c558();
    }
  }
LAB_041aa854:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

