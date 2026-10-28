// rea decompile_all
// name: ChocDino.UIFX.BlurZoomFilter$$.ctor
// address: 0x43c6b24
// body: available
// range: 0x43c6b24-0x43c6cef inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x43c6ce8 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x43c6cec to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void ChocDino_UIFX_BlurZoomFilter___ctor(long param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined4 local_38;
  
  if ((DAT_09517bb3 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09181258);
    FUN_03f5c2a4(&DAT_091845d0);
    FUN_03f5c2a4(&DAT_09180230);
    DAT_09517bb3 = 1;
  }
  if (DAT_09515ce8 == '\0') {
    FUN_03f5c2a4(&DAT_0918cb68);
    DAT_09515ce8 = '\x01';
  }
  uVar3 = DAT_09180230;
  uVar4 = **(undefined8 **)(DAT_0918cb68 + 0xb8);
  *(undefined8 *)(param_1 + 0x1cc) = 0x140000000;
  *(undefined8 *)(param_1 + 0x1c4) = uVar4;
  *(undefined4 *)(param_1 + 0x1d4) = 0x3f800000;
  lVar2 = FUN_03f5c394(uVar3,2);
  local_50 = 0;
  uStack_48 = 0;
  local_38 = 0;
  local_40 = 0;
  UnityEngine_Keyframe___ctor(ZEXT816(0),0x3f800000,0xbf800000,0xbf800000,&local_50,0);
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
      UnityEngine_Keyframe___ctor(ZEXT816(0x3f800000),0,0xbf800000,0xbf800000,&local_70,0);
      if ((*(uint *)(lVar2 + 0x18) & 0xfffffffe) != 0) {
        *(undefined4 *)(lVar2 + 0x54) = local_58;
        *(undefined8 *)(lVar2 + 0x4c) = local_60;
        *(undefined8 *)(lVar2 + 0x44) = uStack_68;
        *(undefined8 *)(lVar2 + 0x3c) = local_70;
        uVar3 = thunk_FUN_03f9944c(DAT_09181258);
        UnityEngine_AnimationCurve___ctor(uVar3,lVar2,0);
        *(undefined8 *)(param_1 + 0x1e8) = uVar3;
        thunk_FUN_03f5d7b8(param_1 + 0x1e8,uVar3);
        lVar2 = DAT_091845d0;
        auVar5 = NEON_fmov(0x3f800000,4);
        uVar3 = NEON_fmov(0x3f800000,4);
        *(long *)(param_1 + 0x1f8) = auVar5._8_8_;
        *(long *)(param_1 + 0x1f0) = auVar5._0_8_;
        iVar1 = *(int *)(lVar2 + 0xe4);
        *(undefined8 *)(param_1 + 0x200) = uVar3;
        if (iVar1 == 0) {
          FUN_03f5c424();
        }
        ChocDino_UIFX_FilterBase___ctor(param_1);
        return;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_03f5c558();
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

