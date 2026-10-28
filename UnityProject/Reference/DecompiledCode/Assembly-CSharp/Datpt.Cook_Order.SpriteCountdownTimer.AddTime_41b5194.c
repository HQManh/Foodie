// rea decompile_all
// name: Datpt.Cook_Order.SpriteCountdownTimer$$AddTime
// address: 0x41b5194
// body: available
// range: 0x41b5194-0x41b52bf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x41b52bc to 0x4d956bc FUN_04d956bc (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Datpt_Cook_Order_SpriteCountdownTimer__AddTime(float param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  float fVar3;
  float fVar4;
  
  if ((DAT_09516939 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091d9828);
    FUN_03f5c2a4(&DAT_0918c148);
    FUN_03f5c2a4(&DAT_091dbd28);
    DAT_09516939 = 1;
  }
  fVar3 = *(float *)(param_2 + 0x20);
  fVar4 = *(float *)(param_2 + 0x28) + fVar3 * (param_1 / fVar3);
  if (fVar4 <= fVar3) {
    fVar3 = fVar4;
  }
  fVar4 = 0.0;
  if (0.0 <= fVar3) {
    fVar4 = fVar3;
  }
  *(float *)(param_2 + 0x28) = fVar4;
  Datpt_Cook_Order_SpriteCountdownTimer__UpdateVisual(param_2);
  uVar1 = UnityEngine_Component__get_transform(param_2,0);
  uVar1 = DG_Tweening_ShortcutExtensions__DOPunchScale
                    ((float)*(undefined8 *)(param_2 + 0x3c) * 0.1,
                     (float)((ulong)*(undefined8 *)(param_2 + 0x3c) >> 0x20) * 0.1,
                     *(float *)(param_2 + 0x44) * 0.1,0x3e4ccccd,0x3f800000,uVar1,10,0);
  uVar2 = thunk_FUN_03f9944c(DAT_0918c148);
  DG_Tweening_TweenCallback___ctor(uVar2,param_2,DAT_091d9828,0);
  FUN_04d956bc(uVar1,uVar2,DAT_091dbd28);
  return;
}

