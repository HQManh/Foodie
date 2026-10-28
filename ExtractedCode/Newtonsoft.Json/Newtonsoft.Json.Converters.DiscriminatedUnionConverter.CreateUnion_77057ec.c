// rea decompile_all
// name: Newtonsoft.Json.Converters.DiscriminatedUnionConverter$$CreateUnion
// address: 0x77057ec
// body: available
// range: 0x77057ec-0x7705fab inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7705f60 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7705f64 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7705f70 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7705f78 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7705f80 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7705f88 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7705f90 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7705f9c to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7705fa8 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long Newtonsoft_Json_Converters_DiscriminatedUnionConverter__CreateUnion(long param_1)

{
  undefined4 uVar1;
  uint uVar2;
  undefined8 uVar3;
  long *plVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  undefined4 *puVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  undefined8 *puVar15;
  long lVar16;
  ulong uVar17;
  long lVar18;
  
  if ((DAT_09522960 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c0270);
    FUN_03f5c2a4(&DAT_09184478);
    FUN_03f5c2a4(&DAT_09184480);
    FUN_03f5c2a4(&DAT_091b28b0);
    FUN_03f5c2a4(&DAT_091b28a8);
    FUN_03f5c2a4(&DAT_0917d300);
    FUN_03f5c2a4(&DAT_09180318);
    FUN_03f5c2a4(&DAT_091803c8);
    FUN_03f5c2a4(&DAT_09190178);
    FUN_03f5c2a4(&DAT_09190170);
    DAT_09522960 = 1;
  }
  if (*(int *)(DAT_09184480 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  if (DAT_095226ca == '\0') {
    FUN_03f5c2a4(&DAT_09184480);
    DAT_095226ca = '\x01';
  }
  if (*(int *)(DAT_09184480 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  lVar12 = *(long *)(*(long *)(DAT_09184480 + 0xb8) + 8);
  if (lVar12 != 0) {
    lVar12 = *(long *)(lVar12 + 0x38);
    plVar4 = (long *)FUN_03f5c394(DAT_09180318,2);
    if (plVar4 != (long *)0x0) {
      if ((param_1 != 0) &&
         (lVar5 = thunk_FUN_03f99350(param_1,*(undefined8 *)(*plVar4 + 0x40)), lVar5 == 0)) {
LAB_07705f68:
        uVar6 = thunk_FUN_03fa6ef4();
                    /* WARNING: Subroutine does not return */
        FUN_03f5c414(uVar6,0);
      }
      if ((int)plVar4[3] == 0) {
LAB_07705f64:
                    /* WARNING: Subroutine does not return */
        FUN_03f5c558();
      }
      plVar4[4] = param_1;
      thunk_FUN_03f5d7b8(plVar4 + 4,param_1);
      if (lVar12 != 0) {
        plVar4 = (long *)(**(code **)(lVar12 + 0x18))
                                   (*(undefined8 *)(lVar12 + 0x40),0,plVar4,
                                    *(undefined8 *)(lVar12 + 0x28));
        uVar6 = thunk_FUN_03f9944c(DAT_0917d300);
        FUN_057e0400(uVar6,DAT_091b28a8);
        lVar12 = thunk_FUN_03f9944c(DAT_09190170);
        if (plVar4 != (long *)0x0) {
          if ((*(byte *)(*plVar4 + 0x130) < *(byte *)(DAT_09184478 + 0x130)) ||
             (*(long *)(*(long *)(*plVar4 + 200) + (ulong)*(byte *)(DAT_09184478 + 0x130) * 8 + -8)
              != DAT_09184478)) {
LAB_07705f8c:
                    /* WARNING: Subroutine does not return */
            FUN_03f5c8d0(plVar4);
          }
        }
        Newtonsoft_Json_Converters_DiscriminatedUnionConverter_Union___ctor(lVar12,plVar4,uVar6);
        if (DAT_095226ca == '\0') {
          FUN_03f5c2a4(&DAT_09184480);
          DAT_095226ca = '\x01';
        }
        if (*(int *)(DAT_09184480 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        lVar5 = *(long *)(*(long *)(DAT_09184480 + 0xb8) + 8);
        if (lVar5 != 0) {
          lVar5 = *(long *)(lVar5 + 0x30);
          plVar4 = (long *)FUN_03f5c394(DAT_09180318,2);
          if (plVar4 != (long *)0x0) {
            if ((param_1 != 0) &&
               (lVar7 = thunk_FUN_03f99350(param_1,*(undefined8 *)(*plVar4 + 0x40)), lVar7 == 0))
            goto LAB_07705f68;
            if ((int)plVar4[3] == 0) goto LAB_07705f64;
            plVar4[4] = param_1;
            thunk_FUN_03f5d7b8(plVar4 + 4,param_1);
            if ((lVar5 != 0) &&
               (lVar5 = (**(code **)(lVar5 + 0x18))
                                  (*(undefined8 *)(lVar5 + 0x40),0,plVar4,
                                   *(undefined8 *)(lVar5 + 0x28)), uVar6 = DAT_09180318, lVar5 != 0)
               ) {
              lVar7 = thunk_FUN_03f99350(lVar5,DAT_09180318);
              if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c8d0(lVar5,uVar6);
              }
              if (0 < (int)*(ulong *)(lVar7 + 0x18)) {
                uVar17 = 0;
                uVar13 = *(ulong *)(lVar7 + 0x18) & 0xffffffff;
                do {
                  if (uVar13 <= uVar17) goto LAB_07705f64;
                  lVar5 = *(long *)(lVar7 + 0x20 + uVar17 * 8);
                  if (*(int *)(DAT_09184480 + 0xe4) == 0) {
                    FUN_03f5c424();
                  }
                  if (DAT_095226ca == '\0') {
                    FUN_03f5c2a4(&DAT_09184480);
                    DAT_095226ca = '\x01';
                  }
                  if (*(int *)(DAT_09184480 + 0xe4) == 0) {
                    FUN_03f5c424();
                  }
                  lVar14 = *(long *)(*(long *)(DAT_09184480 + 0xb8) + 8);
                  if ((lVar14 == 0) || (lVar14 = *(long *)(lVar14 + 0x60), lVar14 == 0))
                  goto LAB_07705f60;
                  plVar8 = (long *)(**(code **)(lVar14 + 0x18))
                                             (*(undefined8 *)(lVar14 + 0x40),lVar5,
                                              *(undefined8 *)(lVar14 + 0x28));
                  if (DAT_095226ca == '\0') {
                    FUN_03f5c2a4(&DAT_09184480);
                    DAT_095226ca = '\x01';
                  }
                  if (*(int *)(DAT_09184480 + 0xe4) == 0) {
                    FUN_03f5c424();
                  }
                  lVar14 = *(long *)(*(long *)(DAT_09184480 + 0xb8) + 8);
                  if ((lVar14 == 0) || (lVar14 = *(long *)(lVar14 + 0x58), lVar14 == 0))
                  goto LAB_07705f60;
                  plVar4 = (long *)(**(code **)(lVar14 + 0x18))
                                             (*(undefined8 *)(lVar14 + 0x40),lVar5,
                                              *(undefined8 *)(lVar14 + 0x28));
                  if (DAT_095226ca == '\0') {
                    FUN_03f5c2a4(&DAT_09184480);
                    DAT_095226ca = '\x01';
                  }
                  if (*(int *)(DAT_09184480 + 0xe4) == 0) {
                    FUN_03f5c424();
                  }
                  lVar14 = DAT_091c0270;
                  lVar16 = *(long *)(*(long *)(DAT_09184480 + 0xb8) + 8);
                  if (lVar16 == 0) goto LAB_07705f60;
                  lVar18 = *(long *)(lVar16 + 0x68);
                  lVar16 = *(long *)(DAT_091c0270 + 0x38);
                  if (lVar16 == 0) {
                    FUN_03f95ac8(DAT_091c0270);
                    lVar16 = *(long *)(lVar14 + 0x38);
                  }
                  lVar16 = *(long *)(lVar16 + 0x10);
                  if ((*(ushort *)(lVar16 + 0x135) & 1) == 0) {
                    lVar16 = FUN_03f95a6c();
                  }
                  if (*(int *)(lVar16 + 0xe4) == 0) {
                    FUN_03f5c424();
                  }
                  lVar14 = *(long *)(*(long *)(lVar14 + 0x38) + 0x10);
                  if ((*(ushort *)(lVar14 + 0x135) & 1) == 0) {
                    lVar14 = FUN_03f95a6c();
                  }
                  if (lVar18 == 0) goto LAB_07705f60;
                  lVar14 = (**(code **)(lVar18 + 0x18))
                                     (*(undefined8 *)(lVar18 + 0x40),lVar5,
                                      **(undefined8 **)(lVar14 + 0xb8),
                                      *(undefined8 *)(lVar18 + 0x28));
                  if (DAT_095226ca == '\0') {
                    FUN_03f5c2a4(&DAT_09184480);
                    DAT_095226ca = '\x01';
                  }
                  if (*(int *)(DAT_09184480 + 0xe4) == 0) {
                    FUN_03f5c424();
                  }
                  lVar16 = *(long *)(*(long *)(DAT_09184480 + 0xb8) + 8);
                  if (lVar16 == 0) goto LAB_07705f60;
                  lVar16 = *(long *)(lVar16 + 0x40);
                  plVar9 = (long *)FUN_03f5c394(DAT_09180318,2);
                  if (plVar9 == (long *)0x0) goto LAB_07705f60;
                  if ((lVar5 != 0) &&
                     (lVar18 = thunk_FUN_03f99350(lVar5,*(undefined8 *)(*plVar9 + 0x40)),
                     lVar18 == 0)) goto LAB_07705f68;
                  if ((int)plVar9[3] == 0) goto LAB_07705f64;
                  plVar9[4] = lVar5;
                  thunk_FUN_03f5d7b8(plVar9 + 4,lVar5);
                  if (lVar16 == 0) goto LAB_07705f60;
                  plVar9 = (long *)(**(code **)(lVar16 + 0x18))
                                             (*(undefined8 *)(lVar16 + 0x40),0,plVar9,
                                              *(undefined8 *)(lVar16 + 0x28));
                  if (DAT_095226ca == '\0') {
                    FUN_03f5c2a4(&DAT_09184480);
                    DAT_095226ca = '\x01';
                  }
                  if (*(int *)(DAT_09184480 + 0xe4) == 0) {
                    FUN_03f5c424();
                  }
                  lVar16 = *(long *)(*(long *)(DAT_09184480 + 0xb8) + 8);
                  if (lVar16 == 0) goto LAB_07705f60;
                  lVar16 = *(long *)(lVar16 + 0x48);
                  plVar10 = (long *)FUN_03f5c394(DAT_09180318,2);
                  if (plVar10 == (long *)0x0) goto LAB_07705f60;
                  if ((lVar5 != 0) &&
                     (lVar18 = thunk_FUN_03f99350(lVar5,*(undefined8 *)(*plVar10 + 0x40)),
                     lVar18 == 0)) goto LAB_07705f68;
                  if ((int)plVar10[3] == 0) goto LAB_07705f64;
                  plVar10[4] = lVar5;
                  thunk_FUN_03f5d7b8(plVar10 + 4,lVar5);
                  if (lVar16 == 0) goto LAB_07705f60;
                  plVar10 = (long *)(**(code **)(lVar16 + 0x18))
                                              (*(undefined8 *)(lVar16 + 0x40),0,plVar10,
                                               *(undefined8 *)(lVar16 + 0x28));
                  uVar6 = thunk_FUN_03f9944c(DAT_09190178);
                  if (plVar8 == (long *)0x0) goto LAB_07705f60;
                  if (*(long *)(*plVar8 + 0x40) != *(long *)(DAT_09535420 + 0x40)) {
                    /* WARNING: Subroutine does not return */
                    FUN_03f5c8d0(plVar8);
                  }
                  puVar11 = (undefined4 *)thunk_FUN_03f99594(plVar8);
                  uVar3 = DAT_091803c8;
                  uVar1 = *puVar11;
                  if (plVar4 != (long *)0x0) {
                    if (*plVar4 != DAT_09535468) goto LAB_07705f8c;
                  }
                  if (lVar14 == 0) {
                    lVar5 = 0;
                  }
                  else {
                    lVar5 = thunk_FUN_03f99350(lVar14,DAT_091803c8);
                    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_03f5c8d0(lVar14,uVar3);
                    }
                  }
                  if (plVar9 != (long *)0x0) {
                    if ((*(byte *)(*plVar9 + 0x130) < *(byte *)(DAT_09184478 + 0x130)) ||
                       (*(long *)(*(long *)(*plVar9 + 200) +
                                  (ulong)*(byte *)(DAT_09184478 + 0x130) * 8 + -8) != DAT_09184478))
                    {
                    /* WARNING: Subroutine does not return */
                      FUN_03f5c8d0(plVar9);
                    }
                  }
                  if (plVar10 != (long *)0x0) {
                    if ((*(byte *)(*plVar10 + 0x130) < *(byte *)(DAT_09184478 + 0x130)) ||
                       (*(long *)(*(long *)(*plVar10 + 200) +
                                  (ulong)*(byte *)(DAT_09184478 + 0x130) * 8 + -8) != DAT_09184478))
                    {
                    /* WARNING: Subroutine does not return */
                      FUN_03f5c8d0(plVar10);
                    }
                  }
                  Newtonsoft_Json_Converters_DiscriminatedUnionConverter_UnionCase___ctor
                            (uVar6,uVar1,plVar4,lVar5,plVar9,plVar10);
                  lVar5 = DAT_091b28b0;
                  if ((lVar12 == 0) || (lVar14 = *(long *)(lVar12 + 0x18), lVar14 == 0))
                  goto LAB_07705f60;
                  lVar16 = *(long *)(lVar14 + 0x10);
                  *(int *)(lVar14 + 0x1c) = *(int *)(lVar14 + 0x1c) + 1;
                  if (lVar16 == 0) goto LAB_07705f60;
                  uVar2 = *(uint *)(lVar14 + 0x18);
                  if (uVar2 < *(uint *)(lVar16 + 0x18)) {
                    *(uint *)(lVar14 + 0x18) = uVar2 + 1;
                    puVar15 = (undefined8 *)(lVar16 + (long)(int)uVar2 * 8 + 0x20);
                    *puVar15 = uVar6;
                    thunk_FUN_03f5d7b8(puVar15,uVar6);
                  }
                  else {
                    FUN_057e0c68(lVar14,uVar6,
                                 *(undefined8 *)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
                  }
                  uVar13 = (ulong)*(uint *)(lVar7 + 0x18);
                  uVar17 = uVar17 + 1;
                } while ((long)uVar17 < (long)(int)*(uint *)(lVar7 + 0x18));
              }
              return lVar12;
            }
          }
        }
      }
    }
  }
LAB_07705f60:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

