// rea decompile_all
// name: DG.Tweening.DOTweenPath$$.ctor
// address: 0x455ccf8
// body: available
// range: 0x455ccf8-0x455cf8f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x455cf88 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x455cf8c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void DG_Tweening_DOTweenPath___ctor(long param_1)

{
  char cVar1;
  long lVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined4 local_38;
  
  if ((DAT_09518809 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09181258);
    FUN_03f5c2a4(&DAT_09180230);
    FUN_03f5c2a4(&DAT_091b1a30);
    FUN_03f5c2a4(&DAT_0917d060);
    FUN_03f5c2a4(&DAT_091f5700);
    DAT_09518809 = 1;
  }
  uVar3 = DAT_09180230;
  *(undefined8 *)(param_1 + 0x74) = 0x63f800000;
  lVar2 = FUN_03f5c394(uVar3,2);
  local_50 = 0;
  uStack_48 = 0;
  local_38 = 0;
  local_40 = 0;
  UnityEngine_Keyframe___ctor(0,0,&local_50,0);
  if (lVar2 != 0) {
    if (*(int *)(lVar2 + 0x18) != 0) {
      *(undefined8 *)(lVar2 + 0x28) = uStack_48;
      *(undefined8 *)(lVar2 + 0x20) = local_50;
      *(undefined4 *)(lVar2 + 0x38) = local_38;
      *(undefined8 *)(lVar2 + 0x30) = local_40;
      local_70 = 0;
      uStack_68 = 0;
      local_58 = 0;
      local_60 = 0;
      UnityEngine_Keyframe___ctor(0x3f800000,0x3f800000,&local_70,0);
      if ((*(uint *)(lVar2 + 0x18) & 0xfffffffe) != 0) {
        *(undefined4 *)(lVar2 + 0x54) = local_58;
        *(undefined8 *)(lVar2 + 0x4c) = local_60;
        *(undefined8 *)(lVar2 + 0x44) = uStack_68;
        *(undefined8 *)(lVar2 + 0x3c) = local_70;
        uVar3 = thunk_FUN_03f9944c(DAT_09181258);
        UnityEngine_AnimationCurve___ctor(uVar3,lVar2,0);
        *(undefined8 *)(param_1 + 0x80) = uVar3;
        thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x80),uVar3);
        *(undefined8 *)(param_1 + 0x90) = DAT_091f5700;
        *(undefined4 *)(param_1 + 0x88) = 1;
        thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x90));
        cVar1 = DAT_09517b1f;
        *(undefined4 *)(param_1 + 0xb4) = 0x3c23d70a;
        *(undefined2 *)(param_1 + 0xb8) = 0x101;
        *(undefined8 *)(param_1 + 0xc0) = 0x10000000a;
        if (cVar1 == '\0') {
          FUN_03f5c2a4(&DAT_0918cbd0);
          DAT_09517b1f = '\x01';
        }
        cVar1 = DAT_09515faa;
        lVar2 = DAT_0918cbd0;
        uVar4 = *(undefined4 *)(*(long *)(DAT_0918cbd0 + 0xb8) + 0x50);
        *(undefined8 *)(param_1 + 0xd0) = *(undefined8 *)(*(long *)(DAT_0918cbd0 + 0xb8) + 0x48);
        *(undefined4 *)(param_1 + 0xd8) = uVar4;
        if (cVar1 == '\0') {
          FUN_03f5c2a4(&DAT_0918cbd0);
          DAT_09515faa = '\x01';
          lVar2 = DAT_0918cbd0;
        }
        uVar3 = DAT_0917d060;
        uVar4 = *(undefined4 *)(*(long *)(lVar2 + 0xb8) + 0x20);
        *(undefined8 *)(param_1 + 0xdc) = *(undefined8 *)(*(long *)(lVar2 + 0xb8) + 0x18);
        *(undefined4 *)(param_1 + 0xe4) = uVar4;
        uVar3 = thunk_FUN_03f9944c(uVar3);
        FUN_058b104c(uVar3,DAT_091b1a30);
        *(undefined8 *)(param_1 + 0xf0) = uVar3;
        thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0xf0),uVar3);
        uVar3 = thunk_FUN_03f9944c(DAT_0917d060);
        FUN_058b104c(uVar3,DAT_091b1a30);
        *(undefined8 *)(param_1 + 0xf8) = uVar3;
        thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0xf8),uVar3);
        *(undefined1 *)(param_1 + 0x114) = 1;
        *(undefined1 *)(param_1 + 0x120) = 1;
        *(undefined4 *)(param_1 + 0x11c) = 0x3f000000;
        *(undefined8 *)(param_1 + 300) = 0x3f0000003f800000;
        *(undefined8 *)(param_1 + 0x124) = 0x3f8000003f800000;
        UnityEngine_MonoBehaviour___ctor(param_1,0);
        return;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_03f5c558();
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

