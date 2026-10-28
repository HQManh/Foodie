// rea decompile_all
// name: ChocDino.UIFX.TrailEffect$$AddOriginalVertices
// address: 0x43b0d54
// body: available
// range: 0x43b0d54-0x43b0f7f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x43b0e04 to 0x5894cd0 FUN_05894cd0 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x43b0f7c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void ChocDino_UIFX_TrailEffect__AddOriginalVertices(long param_1,int param_2,undefined8 *param_3)

{
  uint uVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  long lVar5;
  int iVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  float fVar11;
  undefined8 uVar12;
  float fVar13;
  float fVar14;
  undefined8 uVar15;
  float fVar16;
  float fVar17;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  float local_c8;
  undefined1 auStack_c4 [100];
  
  if ((DAT_09517afc & 1) == 0) {
    FUN_03f5c2a4(&DAT_091b1708);
    FUN_03f5c2a4(&DAT_091b1700);
    FUN_03f5c2a4(&DAT_091b1750);
    DAT_09517afc = 1;
  }
  uStack_128 = 0;
  local_130 = 0;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  local_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  local_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  if (*(uint *)(param_1 + 0x38) < 2) {
    if (*(long *)(param_1 + 0x90) != 0) {
      FUN_05894cd0(*(long *)(param_1 + 0x90),*(undefined8 *)(param_1 + 0x80),DAT_091b1708);
      return;
    }
LAB_043b0f7c:
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  if (0 < param_2) {
    iVar6 = 0;
    do {
      if (*(long *)(param_1 + 0x80) == 0) goto LAB_043b0f7c;
      FUN_05894708(&local_d0,*(long *)(param_1 + 0x80),iVar6,DAT_091b1750);
      fVar4 = local_c8;
      uVar10 = local_d0;
      fVar3 = local_d0._4_4_;
      memcpy(&local_130,auStack_c4,0x60);
      lVar2 = DAT_091b1700;
      lVar7 = *(long *)(param_1 + 0x90);
      if (lVar7 == 0) goto LAB_043b0f7c;
      uVar15 = *param_3;
      uVar12 = param_3[2];
      uVar9 = param_3[4];
      uVar8 = param_3[6];
      fVar11 = *(float *)(param_3 + 1);
      fVar16 = *(float *)(param_3 + 3);
      fVar13 = *(float *)(param_3 + 5);
      lVar5 = *(long *)(lVar7 + 0x10);
      fVar14 = *(float *)(param_3 + 7);
      *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
      if (lVar5 == 0) goto LAB_043b0f7c;
      uVar1 = *(uint *)(lVar7 + 0x18);
      fVar17 = (float)uVar10;
      uVar10 = CONCAT44((float)((ulong)uVar8 >> 0x20) +
                        (float)((ulong)uVar15 >> 0x20) * fVar17 +
                        (float)((ulong)uVar12 >> 0x20) * fVar3 +
                        (float)((ulong)uVar9 >> 0x20) * fVar4,
                        (float)uVar8 +
                        (float)uVar15 * fVar17 + (float)uVar12 * fVar3 + (float)uVar9 * fVar4);
      fVar14 = fVar14 + fVar17 * fVar11 + fVar3 * fVar16 + fVar4 * fVar13;
      if (uVar1 < *(uint *)(lVar5 + 0x18)) {
        lVar5 = lVar5 + (long)(int)uVar1 * 0x6c;
        *(uint *)(lVar7 + 0x18) = uVar1 + 1;
        *(undefined8 *)(lVar5 + 0x20) = uVar10;
        *(float *)(lVar5 + 0x28) = fVar14;
        memcpy((void *)(lVar5 + 0x2c),&local_130,0x60);
      }
      else {
        uVar8 = *(undefined8 *)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70);
        local_d0 = uVar10;
        local_c8 = fVar14;
        memcpy(auStack_c4,&local_130,0x60);
        FUN_05894a80(lVar7,&local_d0,uVar8);
      }
      iVar6 = iVar6 + 1;
    } while (param_2 != iVar6);
  }
  return;
}

