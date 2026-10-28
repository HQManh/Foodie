// rea decompile_all
// name: DG.Tweening.Plugins.Color2Plugin$$SetFrom
// address: 0x4560d8c
// body: available
// range: 0x4560d8c-0x4560f6f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4560f6c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void DG_Tweening_Plugins_Color2Plugin__SetFrom(undefined8 param_1,long param_2,ulong param_3)

{
  long lVar1;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined8 local_a0;
  undefined4 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 local_78;
  
  if ((param_2 != 0) && (lVar1 = *(long *)(param_2 + 0x188), lVar1 != 0)) {
    fVar10 = *(float *)(param_2 + 0x144);
    fVar9 = *(float *)(param_2 + 0x148);
    fVar8 = *(float *)(param_2 + 0x14c);
    fVar6 = *(float *)(param_2 + 0x150);
    fVar7 = *(float *)(param_2 + 0x154);
    fVar5 = *(float *)(param_2 + 0x158);
    fVar4 = *(float *)(param_2 + 0x15c);
    fVar3 = *(float *)(param_2 + 0x160);
    (**(code **)(lVar1 + 0x18))
              (&local_90,*(undefined8 *)(lVar1 + 0x40),*(undefined8 *)(lVar1 + 0x28));
    *(undefined8 *)(param_2 + 0x14c) = uStack_88;
    *(undefined8 *)(param_2 + 0x144) = local_90;
    *(undefined8 *)(param_2 + 0x15c) = local_78;
    *(undefined8 *)(param_2 + 0x154) = local_80;
    if ((param_3 & 1) != 0) {
      fVar10 = fVar10 + *(float *)(param_2 + 0x144);
      fVar9 = fVar9 + *(float *)(param_2 + 0x148);
      fVar8 = fVar8 + *(float *)(param_2 + 0x14c);
      fVar6 = fVar6 + *(float *)(param_2 + 0x150);
      fVar7 = fVar7 + *(float *)(param_2 + 0x154);
      fVar5 = fVar5 + *(float *)(param_2 + 0x158);
      fVar4 = fVar4 + *(float *)(param_2 + 0x15c);
      fVar3 = fVar3 + *(float *)(param_2 + 0x160);
    }
    local_78 = 0;
    local_80 = 0;
    uStack_88 = 0;
    local_90 = 0;
    DG_Tweening_Color2___ctor(fVar10,fVar9,fVar8,fVar6,fVar7,fVar5,fVar4,fVar3,&local_90,0);
    local_98 = *(undefined4 *)(param_2 + 0x14c);
    local_b0 = *(undefined8 *)(param_2 + 0x154);
    *(undefined8 *)(param_2 + 300) = uStack_88;
    *(undefined8 *)(param_2 + 0x124) = local_90;
    *(undefined8 *)(param_2 + 0x13c) = local_78;
    *(undefined8 *)(param_2 + 0x134) = local_80;
    local_a0 = *(undefined8 *)(param_2 + 0x144);
    local_a8 = *(undefined4 *)(param_2 + 0x15c);
    if (*(char *)(param_2 + 0x184) == '\0') {
      local_98 = *(undefined4 *)(param_2 + 300);
      local_a8 = *(undefined4 *)(param_2 + 0x13c);
      local_a0 = *(undefined8 *)(param_2 + 0x124);
      uVar2 = *(undefined4 *)(param_2 + 0x130);
      local_b0 = *(undefined8 *)(param_2 + 0x134);
    }
    else {
      uVar2 = *(undefined4 *)(param_2 + 0x130);
    }
    lVar1 = *(long *)(param_2 + 400);
    if (lVar1 != 0) {
      local_90 = local_a0;
      local_78 = CONCAT44(*(undefined4 *)(param_2 + 0x140),local_a8);
      uStack_88 = CONCAT44(uVar2,local_98);
      local_80 = local_b0;
      (**(code **)(lVar1 + 0x18))
                (*(undefined8 *)(lVar1 + 0x40),&local_90,*(undefined8 *)(lVar1 + 0x28));
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

