// rea decompile_all
// name: Coffee.UIEffects.UIVertexUtil$$Flip
// address: 0x43fa294
// body: available
// range: 0x43fa294-0x43fa37f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x43fa37c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Coffee_UIEffects_UIVertexUtil__Flip(long param_1,ulong param_2,ulong param_3)

{
  int iVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  undefined1 auStack_11c [108];
  undefined8 local_b0;
  ulong uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined4 uStack_58;
  undefined4 local_54;
  undefined4 uStack_50;
  undefined8 uStack_4c;
  
  uStack_4c = 0;
  uStack_50 = 0;
  uStack_88 = 0;
  local_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  local_70 = 0;
  uStack_58 = 0;
  local_54 = 0;
  uStack_60 = 0;
  uStack_a8 = 0;
  local_b0 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  if (param_1 != 0) {
    iVar1 = UnityEngine_UI_VertexHelper__get_currentVertCount(param_1,0);
    uStack_a8 = 0;
    local_b0 = 0;
    uStack_98 = 0;
    uStack_a0 = 0;
    uStack_88 = 0;
    local_90 = 0;
    uStack_78 = 0;
    uStack_80 = 0;
    uStack_68 = 0;
    local_70 = 0;
    uStack_58 = 0;
    uStack_60 = 0;
    uStack_4c = 0;
    local_54 = 0;
    uStack_50 = 0;
    if (0 < iVar1) {
      iVar2 = 0;
      do {
        UnityEngine_UI_VertexHelper__PopulateUIVertex(param_1,&local_b0,iVar2,0);
        uStack_a8 = uStack_a8 & 0xffffffff00000000;
        fVar3 = -(float)local_b0;
        if ((param_2 & 1) == 0) {
          fVar3 = (float)local_b0;
        }
        fVar4 = -local_b0._4_4_;
        if ((param_3 & 1) == 0) {
          fVar4 = local_b0._4_4_;
        }
        local_b0 = CONCAT44(fVar4,fVar3);
        memcpy(auStack_11c,&local_b0,0x6c);
        UnityEngine_UI_VertexHelper__SetUIVertex(param_1,auStack_11c,iVar2,0);
        iVar2 = iVar2 + 1;
      } while (iVar1 != iVar2);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

