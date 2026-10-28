// rea decompile_all
// name: AnhPD.FoodOrder.Customer$$LocalMove
// address: 0x4201d48
// body: available
// range: 0x4201d48-0x4201f93 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4201f8c to 0x4d95c7c FUN_04d95c7c (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x4201f90 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_Customer__LocalMove
               (float param_1,float param_2,float param_3,undefined4 param_4,undefined8 param_5,
               undefined8 param_6,undefined4 param_7)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  fVar7 = param_3;
  fVar6 = param_2;
  if ((DAT_09516bf2 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0918c148);
    FUN_03f5c2a4(&DAT_091dbd10);
    FUN_03f5c2a4(&DAT_091dbe48);
    FUN_03f5c2a4(&DAT_091dbe60);
    FUN_03f5c2a4(&DAT_091dbeb0);
    FUN_03f5c2a4(&DAT_091e8250);
    FUN_03f5c2a4(&DAT_0918f898);
    DAT_09516bf2 = 1;
  }
  lVar1 = thunk_FUN_03f9944c(DAT_0918f898);
  AnhPD_FoodOrder_Customer_<>c__DisplayClass40_0___ctor(lVar1,0);
  if (lVar1 != 0) {
    *(undefined8 *)(lVar1 + 0x10) = param_6;
    thunk_FUN_03f5d7b8((undefined8 *)(lVar1 + 0x10),param_6);
    uVar2 = UnityEngine_Component__get_transform(param_5,0);
    lVar3 = UnityEngine_Component__get_transform(param_5,0);
    if (lVar3 != 0) {
      fVar5 = (float)UnityEngine_Transform__get_localPosition(lVar3,0);
      uVar2 = DG_Tweening_ShortcutExtensions__DOLocalMove
                        (param_1 + fVar5,param_2 + fVar6,fVar7 + 0.0,param_3,uVar2,0,0);
      uVar2 = FUN_04d95e8c(uVar2,param_7,DAT_091dbeb0);
      uVar4 = thunk_FUN_03f9944c(DAT_0918c148);
      DG_Tweening_TweenCallback___ctor(uVar4,lVar1,DAT_091e8250,0);
      uVar2 = FUN_04d956bc(uVar2,uVar4,DAT_091dbd10);
      FUN_04d95c7c(param_4,uVar2,DAT_091dbe48);
      uVar2 = UnityEngine_Component__get_transform(param_5,0);
      if (DAT_09515faa == '\0') {
        FUN_03f5c2a4(&DAT_0918cbd0);
        DAT_09515faa = '\x01';
      }
      uVar4 = *(undefined8 *)(*(long *)(DAT_0918cbd0 + 0xb8) + 0x18);
      uVar2 = DG_Tweening_ShortcutExtensions__DOPunchScale
                        ((float)uVar4 * 0.1,(float)((ulong)uVar4 >> 0x20) * 0.1,
                         *(float *)(*(long *)(DAT_0918cbd0 + 0xb8) + 0x20) * 0.1,param_3,0x3f800000,
                         uVar2,3,0);
      FUN_04d95c7c(param_4,uVar2,DAT_091dbe60);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

