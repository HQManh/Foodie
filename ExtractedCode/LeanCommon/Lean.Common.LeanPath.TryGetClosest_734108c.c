// rea decompile_all
// name: Lean.Common.LeanPath$$TryGetClosest
// address: 0x734108c
// body: available
// range: 0x734108c-0x73412fb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool Lean_Common_LeanPath__TryGetClosest
               (undefined1 param_1 [16],float param_2,float param_3,undefined8 param_4,
               undefined8 *param_5,float *param_6,int *param_7,int *param_8,undefined4 param_9)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  float *pfVar4;
  int iVar5;
  float fVar6;
  float extraout_s0;
  float extraout_s0_00;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  
  if ((DAT_095206a3 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091876e8);
    DAT_095206a3 = 1;
  }
  iVar2 = Lean_Common_LeanPath__GetPointCount(param_4,param_9);
  if (1 < iVar2) {
    fVar6 = (float)Lean_Common_LeanPath__GetPoint(param_4,0,param_9);
    fVar7 = INFINITY;
    iVar5 = 1;
    fVar10 = param_2;
    fVar11 = param_3;
    do {
      fVar9 = param_3;
      fVar8 = param_2;
      uVar3 = Lean_Common_LeanPath__GetPoint(param_4,iVar5,param_9);
      uStack_b8 = param_5[1];
      local_c0 = *param_5;
      local_b0 = param_5[2];
      uVar3 = Lean_Common_LeanPath__GetClosestPoint
                        (fVar6,fVar10,fVar11,extraout_s0 - fVar6,fVar8 - fVar10,fVar9 - fVar11,uVar3
                         ,&local_c0);
      uStack_d8 = param_5[1];
      local_e0 = *param_5;
      local_d0 = param_5[2];
      param_2 = fVar10;
      param_3 = fVar11;
      fVar6 = (float)Lean_Common_LeanPath__GetClosestDistance(extraout_s0_00,uVar3,&local_e0);
      if (fVar6 < fVar7) {
        *param_7 = iVar5 + -1;
        cVar1 = DAT_095206da;
        *param_8 = iVar5;
        *param_6 = extraout_s0_00;
        param_6[1] = fVar10;
        param_6[2] = fVar11;
        if (cVar1 == '\0') {
          FUN_03f5c2a4(&DAT_0918cbd0);
          DAT_095206da = '\x01';
        }
        if (DAT_0951690d == '\0') {
          FUN_03f5c2a4(&DAT_09187e80);
          DAT_0951690d = '\x01';
        }
        if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        fVar7 = extraout_s0_00 - extraout_s0;
        param_2 = fVar10 - fVar8;
        param_3 = fVar11 - fVar9;
        fVar10 = SQRT(param_3 * param_3 + fVar7 * fVar7 + param_2 * param_2);
        if (fVar10 <= 1e-05) {
          pfVar4 = *(float **)(DAT_0918cbd0 + 0xb8);
          fVar11 = pfVar4[1];
          fVar10 = pfVar4[2];
          fVar7 = *pfVar4;
        }
        else {
          fVar7 = fVar7 / fVar10;
          fVar11 = param_2 / fVar10;
          fVar10 = param_3 / fVar10;
        }
        if (*(int *)(DAT_091876e8 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        pfVar4 = *(float **)(DAT_091876e8 + 0xb8);
        *pfVar4 = fVar7;
        pfVar4[1] = fVar11;
        pfVar4[2] = fVar10;
        fVar7 = fVar6;
      }
      iVar5 = iVar5 + 1;
      fVar10 = fVar8;
      fVar11 = fVar9;
      fVar6 = extraout_s0;
    } while (iVar2 != iVar5);
  }
  return 1 < iVar2;
}

