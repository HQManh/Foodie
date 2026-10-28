// rea decompile_all
// name: Datpt.Cook_Order.CookOrderHelper2D$$ClosestPointInTriangle
// address: 0x41abba0
// body: available
// range: 0x41abba0-0x41abd5f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


float Datpt_Cook_Order_CookOrderHelper2D__ClosestPointInTriangle
                (float param_1,float param_2,float param_3,float param_4,float param_5,float param_6
                ,float param_7,float param_8)

{
  bool bVar1;
  bool bVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  ulong uVar11;
  float fVar12;
  float fVar13;
  int iVar14;
  int iVar15;
  float fVar16;
  float fVar17;
  
  fVar5 = param_5 - param_3;
  fVar6 = param_6 - param_4;
  fVar16 = param_7 - param_3;
  fVar17 = param_8 - param_4;
  fVar7 = (param_1 - param_3) * fVar5 + (param_2 - param_4) * fVar6;
  if ((0.0 < fVar7) ||
     (fVar10 = param_3, 0.0 < (param_1 - param_3) * fVar16 + (param_2 - param_4) * fVar17)) {
    fVar9 = param_1 - param_5;
    fVar8 = param_2 - param_6;
    fVar10 = fVar5 * fVar9 + fVar6 * fVar8;
    fVar12 = fVar9 * fVar16 + fVar8 * fVar17;
    bVar1 = false;
    bVar2 = true;
    if (0.0 <= fVar10) {
      bVar1 = false;
      bVar2 = true;
      if (!NAN(fVar12) && !NAN(fVar10)) {
        bVar1 = fVar12 == fVar10;
        bVar2 = fVar10 <= fVar12;
      }
    }
    fVar10 = param_5;
    if (bVar2 && !bVar1) {
      fVar13 = param_1 - param_7;
      fVar12 = param_2 - param_8;
      fVar16 = fVar16 * fVar13 + fVar17 * fVar12;
      fVar17 = fVar5 * fVar13 + fVar6 * fVar12;
      bVar1 = false;
      bVar2 = true;
      if (0.0 <= fVar16) {
        bVar1 = false;
        bVar2 = true;
        if (!NAN(fVar17) && !NAN(fVar16)) {
          bVar1 = fVar17 == fVar16;
          bVar2 = fVar16 <= fVar17;
        }
      }
      fVar10 = param_7;
      if (bVar2 && !bVar1) {
        fVar3 = param_7 - param_5;
        fVar4 = param_3 - param_7;
        fVar17 = param_8 - param_6;
        fVar10 = param_4 - param_8;
        fVar16 = (fVar3 * fVar9 + fVar17 * fVar8) / (fVar3 * fVar3 + fVar17 * fVar17);
        fVar8 = (fVar4 * fVar13 + fVar10 * fVar12) / (fVar4 * fVar4 + fVar10 * fVar10);
        uVar11 = NEON_fmov(0x3f800000,4);
        fVar7 = fVar7 / (fVar5 * fVar5 + fVar6 * fVar6);
        iVar14 = -(uint)(fVar16 < 0.0);
        iVar15 = -(uint)(fVar8 < 0.0);
        uVar11 = CONCAT44(fVar8,fVar16) ^
                 (CONCAT44(fVar8,fVar16) ^ uVar11) &
                 CONCAT44(-(uint)((float)(uVar11 >> 0x20) < fVar8),-(uint)((float)uVar11 < fVar16));
        fVar8 = (float)CONCAT13((byte)(uVar11 >> 0x18) & ~(byte)((uint)iVar14 >> 0x18),
                                CONCAT12((byte)(uVar11 >> 0x10) & ~(byte)((uint)iVar14 >> 0x10),
                                         CONCAT11((byte)(uVar11 >> 8) & ~(byte)((uint)iVar14 >> 8),
                                                  (byte)uVar11 & ~(byte)iVar14)));
        fVar9 = (float)(CONCAT17((byte)(uVar11 >> 0x38) & ~(byte)((uint)iVar15 >> 0x18),
                                 CONCAT16((byte)(uVar11 >> 0x30) & ~(byte)((uint)iVar15 >> 0x10),
                                          CONCAT15((byte)(uVar11 >> 0x28) &
                                                   ~(byte)((uint)iVar15 >> 8),
                                                   CONCAT14((byte)(uVar11 >> 0x20) & ~(byte)iVar15,
                                                            fVar8)))) >> 0x20);
        fVar16 = 1.0;
        if (fVar7 <= 1.0) {
          fVar16 = fVar7;
        }
        param_5 = param_5 + fVar3 * fVar8;
        param_7 = param_7 + fVar4 * fVar9;
        fVar12 = 0.0;
        if (0.0 <= fVar7) {
          fVar12 = fVar16;
        }
        fVar7 = param_1 - param_5;
        fVar16 = param_1 - param_7;
        fVar17 = param_2 - (param_6 + fVar17 * fVar8);
        fVar8 = param_2 - (param_8 + fVar10 * fVar9);
        fVar10 = param_3 + fVar5 * fVar12;
        fVar7 = fVar7 * fVar7 + fVar17 * fVar17;
        fVar16 = fVar16 * fVar16 + fVar8 * fVar8;
        param_1 = param_1 - fVar10;
        param_2 = param_2 - (param_4 + fVar6 * fVar12);
        fVar6 = param_1 * param_1 + param_2 * param_2;
        fVar5 = fVar7;
        if (fVar16 <= fVar7) {
          fVar5 = fVar16;
        }
        fVar16 = fVar6;
        if (fVar5 <= fVar6) {
          fVar16 = fVar5;
        }
        if ((fVar16 != fVar6) && (fVar10 = param_7, fVar16 == fVar7)) {
          fVar10 = param_5;
        }
      }
    }
  }
  return fVar10;
}

