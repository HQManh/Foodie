// rea decompile_all
// name: FUN_03fc7abc
// address: 0x3fc7abc
// body: available
// range: 0x3fc7abc-0x3fc7c17 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_03fc7abc(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                 undefined8 *param_5,long param_6)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  
  FUN_03fc79b0();
  uVar1 = FUN_03f7bacc(param_6 + 1,param_5[6],param_4[6]);
  if ((uVar1 & 1) != 0) {
    uVar6 = param_5[3];
    uVar5 = param_5[2];
    uVar14 = param_5[5];
    uVar13 = param_5[4];
    uVar12 = param_4[1];
    uVar11 = *param_4;
    uVar4 = param_4[3];
    uVar3 = param_4[2];
    uVar2 = param_4[6];
    uVar8 = param_5[1];
    uVar7 = *param_5;
    uVar10 = param_4[5];
    uVar9 = param_4[4];
    param_4[6] = param_5[6];
    param_4[1] = uVar8;
    *param_4 = uVar7;
    param_4[3] = uVar6;
    param_4[2] = uVar5;
    param_4[5] = uVar14;
    param_4[4] = uVar13;
    param_5[1] = uVar12;
    *param_5 = uVar11;
    param_5[3] = uVar4;
    param_5[2] = uVar3;
    param_5[5] = uVar10;
    param_5[4] = uVar9;
    param_5[6] = uVar2;
    uVar1 = FUN_03f7bacc(param_6 + 1,param_4[6],param_3[6]);
    if ((uVar1 & 1) != 0) {
      uVar6 = param_4[3];
      uVar5 = param_4[2];
      uVar14 = param_4[5];
      uVar13 = param_4[4];
      uVar12 = param_3[1];
      uVar11 = *param_3;
      uVar4 = param_3[3];
      uVar3 = param_3[2];
      uVar2 = param_3[6];
      uVar8 = param_4[1];
      uVar7 = *param_4;
      uVar10 = param_3[5];
      uVar9 = param_3[4];
      param_3[6] = param_4[6];
      param_3[1] = uVar8;
      *param_3 = uVar7;
      param_3[3] = uVar6;
      param_3[2] = uVar5;
      param_3[5] = uVar14;
      param_3[4] = uVar13;
      param_4[1] = uVar12;
      *param_4 = uVar11;
      param_4[3] = uVar4;
      param_4[2] = uVar3;
      param_4[5] = uVar10;
      param_4[4] = uVar9;
      param_4[6] = uVar2;
      uVar1 = FUN_03f7bacc(param_6 + 1,param_3[6],param_2[6]);
      if ((uVar1 & 1) != 0) {
        uVar6 = param_3[3];
        uVar5 = param_3[2];
        uVar14 = param_3[5];
        uVar13 = param_3[4];
        uVar12 = param_2[1];
        uVar11 = *param_2;
        uVar4 = param_2[3];
        uVar3 = param_2[2];
        uVar2 = param_2[6];
        uVar8 = param_3[1];
        uVar7 = *param_3;
        uVar10 = param_2[5];
        uVar9 = param_2[4];
        param_2[6] = param_3[6];
        param_2[1] = uVar8;
        *param_2 = uVar7;
        param_2[3] = uVar6;
        param_2[2] = uVar5;
        param_2[5] = uVar14;
        param_2[4] = uVar13;
        param_3[1] = uVar12;
        *param_3 = uVar11;
        param_3[3] = uVar4;
        param_3[2] = uVar3;
        param_3[5] = uVar10;
        param_3[4] = uVar9;
        param_3[6] = uVar2;
        uVar1 = FUN_03f7bacc(param_6 + 1,param_2[6],param_1[6]);
        if ((uVar1 & 1) != 0) {
          uVar6 = param_2[3];
          uVar5 = param_2[2];
          uVar14 = param_2[5];
          uVar13 = param_2[4];
          uVar12 = param_1[1];
          uVar11 = *param_1;
          uVar4 = param_1[3];
          uVar3 = param_1[2];
          uVar2 = param_1[6];
          uVar8 = param_2[1];
          uVar7 = *param_2;
          uVar10 = param_1[5];
          uVar9 = param_1[4];
          param_1[6] = param_2[6];
          param_1[3] = uVar6;
          param_1[2] = uVar5;
          param_1[5] = uVar14;
          param_1[4] = uVar13;
          param_1[1] = uVar8;
          *param_1 = uVar7;
          param_2[1] = uVar12;
          *param_2 = uVar11;
          param_2[3] = uVar4;
          param_2[2] = uVar3;
          param_2[5] = uVar10;
          param_2[4] = uVar9;
          param_2[6] = uVar2;
        }
      }
    }
  }
  return;
}

