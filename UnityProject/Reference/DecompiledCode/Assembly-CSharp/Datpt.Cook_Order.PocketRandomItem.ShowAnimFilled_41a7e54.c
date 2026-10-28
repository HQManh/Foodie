// rea decompile_all
// name: Datpt.Cook_Order.PocketRandomItem$$ShowAnimFilled
// address: 0x41a7e54
// body: available
// range: 0x41a7e54-0x41a80ef inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x41a80e8 to 0x4d956bc FUN_04d956bc (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x41a80ec to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Datpt_Cook_Order_PocketRandomItem__ShowAnimFilled(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined4 *puVar4;
  undefined8 uVar5;
  float fVar6;
  undefined8 uVar7;
  float fVar8;
  undefined8 uVar9;
  
  if ((DAT_0951688f & 1) == 0) {
    FUN_03f5c2a4(&DAT_091d96f0);
    FUN_03f5c2a4(&DAT_0918c148);
    FUN_03f5c2a4(&DAT_091dbd10);
    FUN_03f5c2a4(&DAT_091dbeb0);
    FUN_03f5c2a4(&DAT_091ee768);
    FUN_03f5c2a4(&DAT_09193500);
    DAT_0951688f = 1;
  }
  lVar1 = thunk_FUN_03f9944c(DAT_09193500);
  System_Object___ctor(lVar1,0);
  if (lVar1 != 0) {
    *(long *)(lVar1 + 0x10) = param_1;
    thunk_FUN_03f5d7b8((long *)(lVar1 + 0x10),param_1);
    *(undefined8 *)(lVar1 + 0x18) = param_2;
    thunk_FUN_03f5d7b8((undefined8 *)(lVar1 + 0x18),param_2);
    lVar2 = Datpt_Cook_Order_SoundControl__get_Ins(0);
    if (lVar2 != 0) {
      FUN_04d59cfc(lVar2,5,0,DAT_091d96f0);
      if ((*(long *)(param_1 + 0x40) != 0) &&
         (lVar2 = UnityEngine_Component__get_gameObject(*(long *)(param_1 + 0x40),0), lVar2 != 0)) {
        UnityEngine_GameObject__SetActive(lVar2,1,0);
        lVar2 = *(long *)(param_1 + 0x40);
        if (DAT_09515cf3 == '\0') {
          FUN_03f5c2a4(&DAT_0918cbd0);
          DAT_09515cf3 = '\x01';
        }
        if (lVar2 != 0) {
          lVar3 = *(long *)(DAT_0918cbd0 + 0xb8);
          UnityEngine_Transform__set_localScale
                    (*(undefined4 *)(lVar3 + 0xc),*(undefined4 *)(lVar3 + 0x10),
                     *(undefined4 *)(lVar3 + 0x14),lVar2,0);
          lVar2 = *(long *)(param_1 + 0x40);
          if (DAT_09515ce6 == '\0') {
            FUN_03f5c2a4(&DAT_0918cbd0);
            DAT_09515ce6 = '\x01';
          }
          uVar9 = **(undefined8 **)(DAT_0918cbd0 + 0xb8);
          fVar8 = *(float *)(*(undefined8 **)(DAT_0918cbd0 + 0xb8) + 1);
          if (DAT_09515faa == '\0') {
            FUN_03f5c2a4(&DAT_0918cbd0);
            DAT_09515faa = '\x01';
          }
          if (lVar2 != 0) {
            uVar5 = NEON_fmov(0x3f400000,4);
            uVar7 = *(undefined8 *)(*(long *)(DAT_0918cbd0 + 0xb8) + 0x18);
            fVar6 = (float)((ulong)uVar9 >> 0x20) +
                    (float)((ulong)uVar7 >> 0x20) * (float)((ulong)uVar5 >> 0x20);
            UnityEngine_Transform__set_localPosition
                      (CONCAT44(fVar6,(float)uVar9 + (float)uVar7 * (float)uVar5),fVar6,
                       fVar8 + *(float *)(*(long *)(DAT_0918cbd0 + 0xb8) + 0x20) * 0.75,lVar2,0);
            uVar9 = *(undefined8 *)(param_1 + 0x40);
            if (DAT_09515ce6 == '\0') {
              FUN_03f5c2a4(&DAT_0918cbd0);
              DAT_09515ce6 = '\x01';
            }
            puVar4 = *(undefined4 **)(DAT_0918cbd0 + 0xb8);
            uVar9 = DG_Tweening_ShortcutExtensions__DOLocalMove
                              (*puVar4,puVar4[1],puVar4[2],0x3f000000,uVar9,0,0);
            uVar9 = FUN_04d95e8c(uVar9,6,DAT_091dbeb0);
            uVar5 = thunk_FUN_03f9944c(DAT_0918c148);
            DG_Tweening_TweenCallback___ctor(uVar5,lVar1,DAT_091ee768,0);
            FUN_04d956bc(uVar9,uVar5,DAT_091dbd10);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

