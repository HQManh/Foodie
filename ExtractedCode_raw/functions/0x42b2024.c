// rea decompile_all
// name: FUN_042b2024
// address: 0x42b2024
// body: available
// range: 0x42b2024-0x42b244f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x42b2448 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x42b244c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_042b2024(long param_1)

{
  ulong uVar1;
  uint uVar2;
  int iVar3;
  char cVar4;
  long lVar5;
  long lVar6;
  int in_w8;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  uint uVar11;
  ulong uVar12;
  uint uVar13;
  long lVar14;
  uint *puVar15;
  float *pfVar16;
  long unaff_x19;
  long unaff_x20;
  long unaff_x22;
  int unaff_w23;
  long unaff_x24;
  long unaff_x25;
  int unaff_w29;
  float fVar17;
  float fVar18;
  float unaff_s8;
  float unaff_s9;
  float fVar19;
  long *in_stack_00000030;
  undefined8 in_stack_00000038;
  long in_stack_00000040;
  long in_stack_00000050;
  long in_stack_00000058;
  int in_stack_00000088;
  
  if (in_w8 == 0) {
    FUN_03f5c2a4(&DAT_0918cb90);
    *(undefined1 *)(unaff_x19 + 0x344) = 1;
    param_1 = in_stack_00000040;
  }
  cVar4 = DAT_09517345;
  if (param_1 == 0) {
LAB_042b244c:
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  uVar7 = (ulong)*(uint *)(param_1 + 0x18);
  if (uVar7 != 0) {
    *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(*(long *)(DAT_0918cb90 + 0xb8) + 0x10);
    if (cVar4 == '\0') {
      FUN_03f5c2a4(&DAT_0918cb90);
      DAT_09517345 = '\x01';
      uVar7 = *(ulong *)(in_stack_00000040 + 0x18);
      param_1 = in_stack_00000040;
    }
    cVar4 = DAT_09517346;
    if ((uVar7 & 0xfffffffe) != 0) {
      *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(*(long *)(DAT_0918cb90 + 0xb8) + 0x18);
      if (cVar4 == '\0') {
        FUN_03f5c2a4(&DAT_0918cb90);
        DAT_09517346 = '\x01';
        uVar7 = *(ulong *)(in_stack_00000040 + 0x18);
        param_1 = in_stack_00000040;
      }
      cVar4 = DAT_09517347;
      if (2 < (uint)uVar7) {
        *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(*(long *)(DAT_0918cb90 + 0xb8) + 0x20);
        if (cVar4 == '\0') {
          FUN_03f5c2a4(&DAT_0918cb90);
          DAT_09517347 = '\x01';
          uVar7 = *(ulong *)(in_stack_00000040 + 0x18);
          param_1 = in_stack_00000040;
        }
        if ((uVar7 & 0xfffffffc) != 0) {
          *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(*(long *)(DAT_0918cb90 + 0xb8) + 0x28);
          if (unaff_x22 != 0) {
            if (0 < *(int *)(unaff_x22 + 0x20)) {
              iVar3 = 0;
              if (in_stack_00000038._4_4_ != 0) {
                iVar3 = unaff_w29 / in_stack_00000038._4_4_;
              }
              do {
                lVar5 = FUN_05e2e7e4(unaff_x22,DAT_091b8d68);
                if (unaff_x24 == 0) goto LAB_042b244c;
                if ((**(uint **)(unaff_x24 + 0x10) <= (uint)lVar5) ||
                   (lVar8 = *(long *)(*(uint **)(unaff_x24 + 0x10) + 4),
                   (uint)lVar8 <= (uint)((ulong)lVar5 >> 0x20))) goto LAB_042b2448;
                if (in_stack_00000050 == 0) goto LAB_042b244c;
                uVar2 = *(uint *)(unaff_x24 + ((lVar5 >> 0x20) + lVar8 * (int)(uint)lVar5) * 4 +
                                 0x20);
                if (*(uint *)(in_stack_00000050 + 0x18) <= uVar2) goto LAB_042b2448;
                lVar8 = (long)(int)uVar2;
                if ((*(int *)(in_stack_00000050 + lVar8 * 4 + 0x20) <= iVar3) &&
                   (0 < (int)*(ulong *)(in_stack_00000040 + 0x18))) {
                  uVar7 = 0;
                  pfVar16 = (float *)(in_stack_00000058 + 0x20 + (long)(int)uVar2 * 0x1c);
                  uVar9 = *(ulong *)(in_stack_00000040 + 0x18) & 0xffffffff;
                  do {
                    if (uVar9 <= uVar7) goto LAB_042b2448;
                    uVar12 = *(ulong *)(in_stack_00000040 + 0x20 + uVar7 * 8);
                    uVar1 = (uVar12 & 0xffffffff00000000) + lVar5;
                    if (-1 < (long)uVar1) {
                      uVar12 = uVar12 + lVar5;
                      uVar11 = (uint)uVar12;
                      if ((-1 < (int)uVar11) && ((int)uVar11 < in_stack_00000088)) {
                        uVar13 = (uint)(uVar1 >> 0x20);
                        if ((int)uVar13 < unaff_w23) {
                          if (unaff_x25 == 0) goto LAB_042b244c;
                          if ((**(uint **)(unaff_x25 + 0x10) <= uVar11) ||
                             (lVar14 = *(long *)(*(uint **)(unaff_x25 + 0x10) + 4),
                             (uint)lVar14 <= uVar13)) goto LAB_042b2448;
                          uVar12 = uVar12 & 0xffffffff;
                          if (*(char *)(unaff_x25 + (uVar1 >> 0x20) + lVar14 * uVar12 + 0x20) !=
                              '\0') {
                            if ((**(uint **)(unaff_x24 + 0x10) <= uVar11) ||
                               (lVar14 = *(long *)(*(uint **)(unaff_x24 + 0x10) + 4),
                               (uint)lVar14 <= uVar13)) goto LAB_042b2448;
                            puVar15 = (uint *)(unaff_x24 + ((uVar1 >> 0x20) + lVar14 * uVar12) * 4 +
                                              0x20);
                            if (*puVar15 == 0xffffffff) {
                              if (*(uint *)(in_stack_00000058 + 0x18) <= uVar2) goto LAB_042b2448;
                              fVar18 = *(float *)(unaff_x20 + 0x10);
                              fVar17 = pfVar16[2];
                              fVar19 = fVar18 * 0.5 + unaff_s8 + fVar18 * (float)(int)uVar11;
                              fVar18 = fVar18 * 0.5 + unaff_s9 + fVar18 * (float)(int)uVar13;
                              if ((fVar17 <= 0.0) ||
                                 ((fVar19 - *pfVar16) * (fVar19 - *pfVar16) +
                                  (fVar18 - pfVar16[1]) * (fVar18 - pfVar16[1]) <= fVar17 * fVar17))
                              {
                                uVar11 = *(uint *)(in_stack_00000050 + 0x18);
                                *puVar15 = uVar2;
                                if (uVar11 <= uVar2) goto LAB_042b2448;
                                lVar14 = *in_stack_00000030;
                                *(int *)(in_stack_00000050 + 0x20 + lVar8 * 4) =
                                     *(int *)(in_stack_00000050 + 0x20 + lVar8 * 4) + 1;
                                if ((lVar14 == 0) ||
                                   (lVar6 = FUN_06ef046c(lVar14,uVar2,DAT_0919d2d0),
                                   lVar14 = DAT_091b19b8, lVar6 == 0)) goto LAB_042b244c;
                                lVar10 = *(long *)(lVar6 + 0x10);
                                *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
                                if (lVar10 == 0) goto LAB_042b244c;
                                uVar11 = *(uint *)(lVar6 + 0x18);
                                if (uVar11 < *(uint *)(lVar10 + 0x18)) {
                                  lVar10 = lVar10 + (long)(int)uVar11 * 8;
                                  *(uint *)(lVar6 + 0x18) = uVar11 + 1;
                                  *(float *)(lVar10 + 0x20) = fVar19;
                                  *(float *)(lVar10 + 0x24) = fVar18;
                                }
                                else {
                                  FUN_058ac614(fVar19,fVar18,lVar6,
                                               *(undefined8 *)
                                                (*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70))
                                  ;
                                }
                                FUN_05e2e65c(unaff_x22,uVar1 & 0xffffffff00000000 | uVar12,
                                             DAT_091b8d70);
                                uVar9 = (ulong)*(uint *)(in_stack_00000040 + 0x18);
                              }
                            }
                          }
                        }
                      }
                    }
                    uVar7 = uVar7 + 1;
                  } while ((long)uVar7 < (long)(int)uVar9);
                }
              } while (0 < *(int *)(unaff_x22 + 0x20));
            }
            return;
          }
          goto LAB_042b244c;
        }
      }
    }
  }
LAB_042b2448:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c558();
}

