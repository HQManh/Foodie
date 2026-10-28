// rea decompile_all
// name: _GAME.SaveGame.SaveGameStats$$BuildForUpload
// address: 0x77a5158
// body: available
// range: 0x77a5158-0x77a563f inclusive
// range: 0x77a56b4-0x77a56b7 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x77a55a8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77a55c0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77a55d8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77a55f0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77a5608 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77a5620 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77a563c to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77a56b4 to 0x89db930 <EXTERNAL>::__stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x077a5624) */
/* WARNING: Removing unreachable block (ram,0x077a5638) */
/* WARNING: Removing unreachable block (ram,0x077a54f0) */

long _GAME_SaveGame_SaveGameStats__BuildForUpload
               (long param_1,undefined8 param_2,undefined8 *param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  undefined8 *puVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  if ((DAT_09522e3b & 1) == 0) {
    FUN_03f5c2a4(&DAT_09194178);
    FUN_03f5c2a4(&DAT_091837d8);
    FUN_03f5c2a4(&DAT_0919f668);
    FUN_03f5c2a4(&DAT_0919f670);
    FUN_03f5c2a4(&DAT_091c96a0);
    FUN_03f5c2a4(&DAT_09185a58);
    FUN_03f5c2a4(&DAT_0917a768);
    FUN_03f5c2a4(&DAT_0917ae48);
    FUN_03f5c2a4(&DAT_09185b10);
    FUN_03f5c2a4(&DAT_0918a5a8);
    DAT_09522e3b = 1;
  }
  local_80 = 0;
  local_78 = 0;
  uStack_70 = 0;
  if (*(int *)(DAT_0918a5a8 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar2 = _GAME_SaveGame_SaveGameStats__ReadCounters(&local_80);
  *param_3 = uVar2;
  thunk_FUN_03f5d7b8(param_3,uVar2);
  uVar3 = _GAME_SaveGame_SaveGameStats__LoadBase(param_2);
  lVar4 = _GAME_SaveGame_SaveGameStats__Merge(param_1,uVar2,uVar3);
  lVar5 = thunk_FUN_03f9944c(DAT_09194178);
  _GAME_SaveGame_SaveGameStats_Block___ctor();
  plVar6 = (long *)FUN_04ad43f0(**(undefined8 **)(DAT_0918a5a8 + 0xb8),
                                (*(undefined8 **)(DAT_0918a5a8 + 0xb8))[1],DAT_091c96a0);
  if (plVar6 != (long *)0x0) {
    lVar8 = *plVar6;
    uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == DAT_0917a768) {
          puVar7 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_077a5308;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar7 = (undefined8 *)FUN_03f95da8(plVar6,DAT_0917a768,0);
LAB_077a5308:
    plVar6 = (long *)(*(code *)*puVar7)(plVar6,puVar7[1]);
    while (plVar6 != (long *)0x0) {
      lVar8 = *plVar6;
      uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == DAT_09185b10) {
            puVar7 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_077a539c;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar7 = (undefined8 *)FUN_03f95da8(plVar6,DAT_09185b10,0);
LAB_077a539c:
      uVar9 = (*(code *)*puVar7)(plVar6,puVar7[1]);
      if ((uVar9 & 1) == 0) {
        if (plVar6 == (long *)0x0) goto LAB_077a54e4;
        lVar8 = *plVar6;
        uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar9 == 0) goto LAB_077a54bc;
        piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        goto LAB_077a54a4;
      }
      if (plVar6 == (long *)0x0) {
        if (*(long *)(lVar1 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        goto LAB_077a56b4;
      }
      lVar8 = *plVar6;
      uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == DAT_0917ae48) {
            puVar7 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_077a5400;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar7 = (undefined8 *)FUN_03f95da8(plVar6,DAT_0917ae48,0);
LAB_077a5400:
      uVar2 = (*(code *)*puVar7)(plVar6,puVar7[1]);
      if (lVar5 == 0) {
        if (*(long *)(lVar1 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        goto LAB_077a56b4;
      }
      if (lVar4 == 0) {
        if (*(long *)(lVar1 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        goto LAB_077a56b4;
      }
      lVar8 = *(long *)(lVar5 + 0x18);
      uVar9 = FUN_06fc4e94(lVar4,uVar2,&local_78,DAT_0919f668);
      if ((uVar9 & 1) == 0) {
        if (*(int *)(DAT_091837d8 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        puVar7 = *(undefined8 **)(DAT_091837d8 + 0xb8);
      }
      else {
        puVar7 = &local_78;
      }
      if (lVar8 == 0) {
        if (*(long *)(lVar1 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        goto LAB_077a56b4;
      }
      FUN_06fc3390(lVar8,uVar2,*puVar7,puVar7[1],DAT_0919f670);
    }
    if (*(long *)(lVar1 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    goto LAB_077a56b4;
  }
  goto LAB_077a560c;
  while( true ) {
    uVar9 = uVar9 - 1;
    piVar10 = piVar10 + 4;
    if (uVar9 == 0) break;
LAB_077a54a4:
    if (*(long *)(piVar10 + -2) == DAT_09185a58) {
      puVar7 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
      goto LAB_077a54d8;
    }
  }
LAB_077a54bc:
  puVar7 = (undefined8 *)FUN_03f95da8(plVar6,DAT_09185a58,0);
LAB_077a54d8:
  (*(code *)*puVar7)(plVar6,puVar7[1]);
LAB_077a54e4:
  if (*(int *)(DAT_0918a5a8 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar2 = _GAME_SaveGame_SaveGameStats__MergeBuckets(param_1);
  if (lVar5 != 0) {
    *(undefined8 *)(lVar5 + 0x20) = uVar2;
    thunk_FUN_03f5d7b8();
    uVar3 = local_80;
    uVar2 = 0;
    if (param_1 != 0) {
      uVar2 = *(undefined8 *)(param_1 + 0x28);
    }
    if (*(int *)(DAT_0918a5a8 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar2 = _GAME_SaveGame_SaveGameStats__MergeUserState(uVar3,uVar2,lVar4);
    *(undefined8 *)(lVar5 + 0x28) = uVar2;
    thunk_FUN_03f5d7b8();
    if (*(long *)(lVar1 + 0x28) == local_68) {
      return lVar5;
    }
    goto LAB_077a56b4;
  }
LAB_077a560c:
  if (*(long *)(lVar1 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
LAB_077a56b4:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

