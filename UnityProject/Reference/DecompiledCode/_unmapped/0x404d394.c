// rea decompile_all
// name: FUN_0404d394
// address: 0x404d394
// body: available
// range: 0x404d394-0x404d81b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x404d7b0 to 0x89dbdc0 <EXTERNAL>::abort (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x404d7e4 to 0x89dbdc0 <EXTERNAL>::abort (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x404d818 to 0x89dbdc0 <EXTERNAL>::abort (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
FUN_0404d394(undefined8 param_1,undefined8 param_2,undefined8 param_3,void *param_4,
            undefined1 *param_5,ulong param_6)

{
  bool bVar1;
  int iVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  ulong *puVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  int *piVar14;
  uint uVar15;
  ulong *puVar16;
  ulong uVar17;
  undefined1 auStack_b20 [288];
  ulong local_a00 [96];
  undefined1 auStack_700 [24];
  int local_6e8 [2];
  long local_6e0 [67];
  undefined8 local_4c8;
  undefined8 uStack_4c0;
  undefined1 auStack_e8 [48];
  undefined1 local_b8;
  byte local_b6;
  char local_b4;
  undefined1 auStack_b0 [48];
  undefined8 local_80;
  undefined8 uStack_78;
  
  lVar6 = FUN_0404c7c0(param_1,param_3,auStack_b0,auStack_e8,0);
  if (lVar6 == 0) {
    memset(auStack_700,0,0x618);
    uVar7 = FUN_0404d81c(param_1,auStack_b0,auStack_e8,param_2,4,auStack_700);
    if ((uVar7 & 1) != 0) {
      uVar7 = FUN_0404e464(param_1,auStack_700,param_4);
      if (((param_6 & 1) != 0) && (local_b4 != '\0')) {
        for (uVar11 = *(ulong *)((long)param_4 + 0xf8) & 0xfffffffffffffff0; uVar11 < uVar7;
            uVar11 = uVar11 + 0x10) {
        }
      }
      memcpy(local_a00 + 0x1e,param_4,0x210);
      uVar11 = 0;
      uVar13 = 0;
      piVar14 = local_6e8;
      puVar16 = local_a00 + 0x1e;
      local_a00[0x3d] = uVar7;
      do {
        iVar2 = *piVar14;
        if (iVar2 == 0) {
          uVar17 = local_a00[0x3d];
          uVar4 = local_a00[0x3b];
          uVar5 = local_a00[0x3c];
          uVar9 = local_a00[0x3f];
          if (uVar11 == local_b6) {
            if (local_b6 < 0x1f) {
              puVar12 = (undefined8 *)((long)param_4 + 0xe8);
              if ((local_b6 != 0x1d) &&
                 (puVar12 = (undefined8 *)((long)param_4 + 0xf0), local_b6 != 0x1e))
              goto LAB_0404d674;
            }
            else {
              puVar12 = (undefined8 *)((long)param_4 + 0x108);
              if ((local_b6 != 0x22) &&
                 ((puVar12 = (undefined8 *)((long)param_4 + 0x100), local_b6 != 0x20 &&
                  (puVar12 = (undefined8 *)((long)param_4 + 0xf8), local_b6 != 0x1f)))) {
LAB_0404d674:
                if (0x1c < local_b6) {
                  fprintf((FILE *)0x974c9d8,"libunwind: %s - %s\n","getRegister",
                          "unsupported arm64 register");
                  fflush((FILE *)0x974c9d8);
                    /* WARNING: Subroutine does not return */
                  abort();
                }
                puVar12 = (undefined8 *)((long)param_4 + (ulong)local_b6 * 8);
              }
            }
            uVar13 = *puVar12;
          }
        }
        else {
          uVar15 = (uint)uVar11;
          if ((uVar15 & 0x60) == 0x40) {
            if (iVar2 < 5) {
              uVar17 = 0;
              if (iVar2 != 1) {
                if (iVar2 != 2) {
LAB_0404d780:
                  fprintf((FILE *)0x974c9d8,"libunwind: %s - %s\n","getSavedFloatRegister",
                          "unsupported restore location for float register");
                  fflush((FILE *)0x974c9d8);
                    /* WARNING: Subroutine does not return */
                  abort();
                }
                uVar17 = *(ulong *)(*(long *)(piVar14 + 2) + uVar7);
              }
            }
            else if (iVar2 == 5) {
              uVar17 = *(ulong *)((long)param_4 +
                                 ((*(long *)(piVar14 + 2) << 0x20) + -0x4000000000 >> 0x1d) + 0x110)
              ;
            }
            else {
              if (iVar2 != 6) goto LAB_0404d780;
              puVar8 = (ulong *)FUN_0404ecfc(*(undefined8 *)(piVar14 + 2),param_1,param_4,uVar7);
              uVar17 = *puVar8;
            }
            local_a00[uVar11] = uVar17;
            uVar17 = local_a00[0x3d];
            uVar4 = local_a00[0x3b];
            uVar5 = local_a00[0x3c];
            uVar9 = local_a00[0x3f];
          }
          else if (uVar11 == local_b6) {
            uVar13 = FUN_0404e598(param_1,param_4,uVar7,piVar14);
            uVar17 = local_a00[0x3d];
            uVar4 = local_a00[0x3b];
            uVar5 = local_a00[0x3c];
            uVar9 = local_a00[0x3f];
          }
          else if (uVar11 == 0x22) {
            uVar9 = FUN_0404e598(param_1,param_4,uVar7,piVar14);
            uVar17 = local_a00[0x3d];
            uVar4 = local_a00[0x3b];
            uVar5 = local_a00[0x3c];
          }
          else {
            if (0xffffffe0 < uVar15 - 0x40) {
              return 0xffffe672;
            }
            uVar10 = FUN_0404e598(param_1,param_4,uVar7,piVar14);
            uVar17 = local_a00[0x3d];
            uVar4 = local_a00[0x3b];
            uVar5 = local_a00[0x3c];
            uVar9 = local_a00[0x3f];
            if ((int)uVar15 < 0x1f) {
              uVar4 = uVar10;
              if ((uVar15 != 0x1d) && (uVar4 = local_a00[0x3b], uVar5 = uVar10, uVar15 != 0x1e))
              goto LAB_0404d6c8;
            }
            else {
              uVar17 = uVar10;
              if ((uVar15 != 0x1f) &&
                 ((uVar17 = local_a00[0x3d], uVar9 = uVar10, uVar15 != 0x22 &&
                  (uVar9 = local_a00[0x3f], uVar15 != 0x20)))) {
LAB_0404d6c8:
                if (0x1c < uVar11) {
                  fprintf((FILE *)0x974c9d8,"libunwind: %s - %s\n","setRegister",
                          "unsupported arm64 register");
                  fflush((FILE *)0x974c9d8);
                    /* WARNING: Subroutine does not return */
                  abort();
                }
                *puVar16 = uVar10;
                uVar17 = local_a00[0x3d];
                uVar4 = local_a00[0x3b];
                uVar5 = local_a00[0x3c];
                uVar9 = local_a00[0x3f];
              }
            }
          }
        }
        local_a00[0x3f] = uVar9;
        local_a00[0x3c] = uVar5;
        local_a00[0x3b] = uVar4;
        local_a00[0x3d] = uVar17;
        uVar11 = uVar11 + 1;
        piVar14 = piVar14 + 4;
        puVar16 = puVar16 + 1;
        if (uVar11 == 0x60) {
          *param_5 = local_b8;
          memcpy(auStack_b20,param_4,0x210);
          uStack_78 = uStack_4c0;
          local_80 = local_4c8;
          uVar3 = local_80;
          local_80._0_4_ = (int)local_4c8;
          bVar1 = (int)local_80 != 0;
          if (bVar1) {
            local_80 = uVar3;
            FUN_0404e598(param_1,auStack_b20,uVar7,&local_80);
          }
          local_a00[0x3e] = uVar13;
          memcpy(param_4,local_a00 + 0x1e,0x210);
          return 1;
        }
      } while( true );
    }
  }
  return 0xffffe66e;
}

