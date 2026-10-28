// rea decompile_all
// name: Newtonsoft.Json.Utilities.ReflectionUtils$$GetFieldsAndProperties
// address: 0x769c9e0
// body: available
// range: 0x769c9e0-0x769d163 inclusive
// range: 0x769d168-0x769d217 inclusive
// range: 0x769d21c-0x769d21f inclusive
// range: 0x769d224-0x769d227 inclusive
// range: 0x769d22c-0x769d22f inclusive
// range: 0x769d234-0x769d237 inclusive
// range: 0x769d23c-0x769d23f inclusive
// range: 0x769d2b8-0x769d2d7 inclusive
// range: 0x769d344-0x769d3e3 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x769d160 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x769d214 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x769d21c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x769d224 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x769d22c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x769d234 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x769d23c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x769d2b8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x769d2bc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x769d2c0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x769d2c4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x769d2cc to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verifi
// limitations_truncated: true; decompile-index.json keeps the complete list
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0769d2c8) */
/* WARNING: Removing unreachable block (ram,0x0769d1e8) */
/* WARNING: Removing unreachable block (ram,0x0769d3e0) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

long Newtonsoft_Json_Utilities_ReflectionUtils__GetFieldsAndProperties
               (undefined8 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  undefined8 *puVar10;
  long lVar11;
  ulong uVar12;
  int *piVar13;
  long lVar14;
  long *plVar15;
  long lVar16;
  
  if ((DAT_095225f8 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c94b0);
    FUN_03f5c2a4(&DAT_091c97b0);
    FUN_03f5c2a4(&DAT_091c9a78);
    FUN_03f5c2a4(&DAT_091c9e18);
    FUN_03f5c2a4(&DAT_09178d00);
    FUN_03f5c2a4(&DAT_09178d18);
    FUN_03f5c2a4(&DAT_09185a58);
    FUN_03f5c2a4(&DAT_0917a608);
    FUN_03f5c2a4(&DAT_0917a278);
    FUN_03f5c2a4(&DAT_0917ace0);
    FUN_03f5c2a4(&DAT_0917a8c0);
    FUN_03f5c2a4(&DAT_09185b10);
    FUN_03f5c2a4(&DAT_091ae740);
    FUN_03f5c2a4(&DAT_091ae738);
    FUN_03f5c2a4(&DAT_091ae720);
    FUN_03f5c2a4(&DAT_091ae730);
    FUN_03f5c2a4(&DAT_091ae760);
    FUN_03f5c2a4(&DAT_0917c728);
    FUN_03f5c2a4(&DAT_09189d88);
    FUN_03f5c2a4(&DAT_091eeee8);
    FUN_03f5c2a4(&DAT_091eeef8);
    FUN_03f5c2a4(&DAT_09193aa8);
    FUN_03f5c2a4(&DAT_09193aa0);
    FUN_03f5c2a4(&DAT_092061f0);
    DAT_095225f8 = 1;
  }
  lVar4 = thunk_FUN_03f9944c(DAT_0917c728);
  FUN_057e0400(lVar4,DAT_091ae720);
  if (*(int *)(DAT_09189d88 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar5 = Newtonsoft_Json_Utilities_ReflectionUtils__GetFields(param_1,param_2);
  if (lVar4 != 0) {
    FUN_057e0e78(lVar4,uVar5,DAT_091ae740);
    uVar5 = Newtonsoft_Json_Utilities_ReflectionUtils__GetProperties(param_1,param_2);
    FUN_057e0e78(lVar4,uVar5,DAT_091ae740);
    uVar1 = *(undefined4 *)(lVar4 + 0x18);
    lVar6 = thunk_FUN_03f9944c(DAT_0917c728);
    FUN_057e0478(lVar6,uVar1,DAT_091ae730);
    if (*(int *)(DAT_09193aa0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    puVar10 = *(undefined8 **)(DAT_09193aa0 + 0xb8);
    lVar14 = puVar10[2];
    if (lVar14 == 0) {
      if (*(int *)(DAT_09193aa0 + 0xe4) == 0) {
        FUN_03f5c424();
        puVar10 = *(undefined8 **)(DAT_09193aa0 + 0xb8);
      }
      uVar5 = *puVar10;
      lVar14 = thunk_FUN_03f9944c(DAT_09178d18);
      FUN_05324070(lVar14,uVar5,DAT_091eeee8,0);
      plVar7 = (long *)(*(long *)(DAT_09193aa0 + 0xb8) + 0x10);
      *plVar7 = lVar14;
      thunk_FUN_03f5d7b8(plVar7,lVar14);
    }
    plVar7 = (long *)FUN_04ae6e8c(lVar4,lVar14,DAT_091c9e18);
    if (plVar7 != (long *)0x0) {
      lVar4 = *plVar7;
      uVar12 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar12 != 0) {
        piVar13 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == DAT_0917a278) {
            puVar10 = (undefined8 *)(lVar4 + (long)*piVar13 * 0x10 + 0x138);
            goto LAB_0769cce4;
          }
          uVar12 = uVar12 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar12 != 0);
      }
      puVar10 = (undefined8 *)FUN_03f95da8(plVar7,DAT_0917a278,0);
LAB_0769cce4:
      plVar7 = (long *)(*(code *)*puVar10)(plVar7,puVar10[1]);
      do {
        if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        lVar4 = *plVar7;
        uVar12 = (ulong)*(ushort *)(lVar4 + 0x12e);
        if (uVar12 != 0) {
          piVar13 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) == DAT_09185b10) {
              puVar10 = (undefined8 *)(lVar4 + (long)*piVar13 * 0x10 + 0x138);
              goto LAB_0769cd80;
            }
            uVar12 = uVar12 - 1;
            piVar13 = piVar13 + 4;
          } while (uVar12 != 0);
        }
        puVar10 = (undefined8 *)FUN_03f95da8(plVar7,DAT_09185b10,0);
LAB_0769cd80:
        uVar12 = (*(code *)*puVar10)(plVar7,puVar10[1]);
        if ((uVar12 & 1) == 0) {
          if (plVar7 == (long *)0x0) {
            return lVar6;
          }
          lVar4 = *plVar7;
          uVar12 = (ulong)*(ushort *)(lVar4 + 0x12e);
          if (uVar12 == 0) goto LAB_0769d38c;
          piVar13 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          goto LAB_0769d374;
        }
        if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        lVar4 = *plVar7;
        uVar12 = (ulong)*(ushort *)(lVar4 + 0x12e);
        if (uVar12 != 0) {
          piVar13 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) == DAT_0917a8c0) {
              puVar10 = (undefined8 *)(lVar4 + (long)*piVar13 * 0x10 + 0x138);
              goto LAB_0769cdec;
            }
            uVar12 = uVar12 - 1;
            piVar13 = piVar13 + 4;
          } while (uVar12 != 0);
        }
        puVar10 = (undefined8 *)FUN_03f95da8(plVar7,DAT_0917a8c0,0);
LAB_0769cdec:
        plVar8 = (long *)(*(code *)*puVar10)(plVar7,puVar10[1]);
        iVar3 = FUN_04ad8a88(plVar8,DAT_091c97b0);
        if (iVar3 == 1) {
          uVar5 = FUN_04ae1388(plVar8,DAT_091c9a78);
          lVar4 = DAT_091ae738;
          if (lVar6 == 0) {
LAB_0769d2bc:
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          lVar14 = *(long *)(lVar6 + 0x10);
          *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
          if (lVar14 == 0) goto LAB_0769d2bc;
          uVar2 = *(uint *)(lVar6 + 0x18);
          if (uVar2 < *(uint *)(lVar14 + 0x18)) {
            *(uint *)(lVar6 + 0x18) = uVar2 + 1;
            *(undefined8 *)(lVar14 + (long)(int)uVar2 * 8 + 0x20) = uVar5;
            thunk_FUN_03f5d7b8();
          }
          else {
            FUN_057e0c68(lVar6,uVar5,
                         *(undefined8 *)(*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70));
          }
        }
        else {
          lVar4 = thunk_FUN_03f9944c(DAT_0917c728);
          FUN_057e0400(lVar4,DAT_091ae720);
          if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          lVar14 = *plVar8;
          uVar12 = (ulong)*(ushort *)(lVar14 + 0x12e);
          if (uVar12 != 0) {
            piVar13 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
            do {
              if (*(long *)(piVar13 + -2) == DAT_0917a608) {
                puVar10 = (undefined8 *)(lVar14 + (long)*piVar13 * 0x10 + 0x138);
                goto LAB_0769cf08;
              }
              uVar12 = uVar12 - 1;
              piVar13 = piVar13 + 4;
            } while (uVar12 != 0);
          }
          puVar10 = (undefined8 *)FUN_03f95da8(plVar8,DAT_0917a608,0);
LAB_0769cf08:
          plVar8 = (long *)(*(code *)*puVar10)(plVar8,puVar10[1]);
joined_r0x0769cf24:
          if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          lVar14 = *plVar8;
          uVar12 = (ulong)*(ushort *)(lVar14 + 0x12e);
          if (uVar12 != 0) {
            piVar13 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
            do {
              if (*(long *)(piVar13 + -2) == DAT_09185b10) {
                puVar10 = (undefined8 *)(lVar14 + (long)*piVar13 * 0x10 + 0x138);
                goto LAB_0769cf74;
              }
              uVar12 = uVar12 - 1;
              piVar13 = piVar13 + 4;
            } while (uVar12 != 0);
          }
          puVar10 = (undefined8 *)FUN_03f95da8(plVar8,DAT_09185b10,0);
LAB_0769cf74:
          uVar12 = (*(code *)*puVar10)(plVar8,puVar10[1]);
          if ((uVar12 & 1) != 0) {
            lVar14 = thunk_FUN_03f9944c(DAT_09193aa8);
            Newtonsoft_Json_Utilities_ReflectionUtils_<>c__DisplayClass31_0___ctor(lVar14,0);
            if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            lVar11 = *plVar8;
            uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
            if (uVar12 != 0) {
              piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
              do {
                if (*(long *)(piVar13 + -2) == DAT_0917ace0) {
                  puVar10 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
                  goto LAB_0769cfec;
                }
                uVar12 = uVar12 - 1;
                piVar13 = piVar13 + 4;
              } while (uVar12 != 0);
            }
            puVar10 = (undefined8 *)FUN_03f95da8(plVar8,DAT_0917ace0,0);
LAB_0769cfec:
            lVar11 = (*(code *)*puVar10)(plVar8,puVar10[1]);
            if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            plVar15 = (long *)(lVar14 + 0x10);
            *plVar15 = lVar11;
            thunk_FUN_03f5d7b8(plVar15);
            lVar11 = DAT_091ae738;
            if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            lVar16 = *plVar15;
            if (*(int *)(lVar4 + 0x18) != 0) {
              if (*(int *)(DAT_09189d88 + 0xe4) == 0) {
                FUN_03f5c424();
              }
              uVar12 = Newtonsoft_Json_Utilities_ReflectionUtils__IsOverridenGenericMember
                                 (lVar16,param_2);
              if ((uVar12 & 1) != 0) goto code_r0x0769d048;
              goto LAB_0769d074;
            }
            lVar14 = *(long *)(lVar4 + 0x10);
            *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
            if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            if (*(int *)(lVar14 + 0x18) == 0) {
              FUN_057e0c68(lVar4,lVar16,
                           *(undefined8 *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
            }
            else {
              *(long *)(lVar14 + 0x20) = lVar16;
              *(undefined4 *)(lVar4 + 0x18) = 1;
              thunk_FUN_03f5d7b8((long *)(lVar14 + 0x20),lVar16);
            }
            goto joined_r0x0769cf24;
          }
          if (plVar8 != (long *)0x0) {
            lVar14 = *plVar8;
            uVar12 = (ulong)*(ushort *)(lVar14 + 0x12e);
            if (uVar12 != 0) {
              piVar13 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
              do {
                if (*(long *)(piVar13 + -2) == DAT_09185a58) {
                  puVar10 = (undefined8 *)(lVar14 + (long)*piVar13 * 0x10 + 0x138);
                  goto LAB_0769d1d0;
                }
                uVar12 = uVar12 - 1;
                piVar13 = piVar13 + 4;
              } while (uVar12 != 0);
            }
            puVar10 = (undefined8 *)FUN_03f95da8(plVar8,DAT_09185a58,0);
LAB_0769d1d0:
            (*(code *)*puVar10)(plVar8,puVar10[1]);
          }
          if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          FUN_057e0e78(lVar6,lVar4,DAT_091ae740);
        }
      } while( true );
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
code_r0x0769d048:
  plVar9 = (long *)*plVar15;
  if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  uVar5 = (**(code **)(*plVar9 + 0x1b8))(plVar9,*(undefined8 *)(*plVar9 + 0x1c0));
  uVar12 = System_String__op_Equality(uVar5,DAT_092061f0,0);
  if ((uVar12 & 1) != 0) {
LAB_0769d074:
    uVar5 = thunk_FUN_03f9944c(DAT_09178d00);
    FUN_05322d94(uVar5,lVar14,DAT_091eeef8,0);
    uVar12 = FUN_04ab6f28(lVar4,uVar5,DAT_091c94b0);
    lVar14 = DAT_091ae738;
    if ((uVar12 & 1) == 0) {
      lVar16 = *(long *)(lVar4 + 0x10);
      lVar11 = *plVar15;
      *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
      if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      uVar2 = *(uint *)(lVar4 + 0x18);
      if (uVar2 < *(uint *)(lVar16 + 0x18)) {
        *(uint *)(lVar4 + 0x18) = uVar2 + 1;
        *(long *)(lVar16 + (long)(int)uVar2 * 8 + 0x20) = lVar11;
        thunk_FUN_03f5d7b8();
      }
      else {
        FUN_057e0c68(lVar4,lVar11,*(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70)
                    );
      }
    }
  }
  goto joined_r0x0769cf24;
  while( true ) {
    uVar12 = uVar12 - 1;
    piVar13 = piVar13 + 4;
    if (uVar12 == 0) break;
LAB_0769d374:
    if (*(long *)(piVar13 + -2) == DAT_09185a58) {
      puVar10 = (undefined8 *)(lVar4 + (long)*piVar13 * 0x10 + 0x138);
      goto LAB_0769d3a8;
    }
  }
LAB_0769d38c:
  puVar10 = (undefined8 *)FUN_03f95da8(plVar7,DAT_09185a58,0);
LAB_0769d3a8:
  (*(code *)*puVar10)(plVar7,puVar10[1]);
  return lVar6;
}

