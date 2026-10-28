// rea decompile_all
// name: _GAME.SaveGame.SaveGameStats$$Counters
// address: 0x77a7ebc
// body: available
// range: 0x77a7ebc-0x77a841b inclusive
// range: 0x77a84f0-0x77a84f3 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x77a839c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77a83b0 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77a83c4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77a83d8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77a83ec to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77a8400 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77a8418 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77a84f0 to 0x89db930 <EXTERNAL>::__stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x077a8404) */
/* WARNING: Removing unreachable block (ram,0x077a8414) */

long _GAME_SaveGame_SaveGameStats__Counters(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined8 *puVar6;
  ulong uVar7;
  int *piVar8;
  undefined8 uVar9;
  long lVar10;
  undefined1 auVar11 [16];
  long *local_d8;
  long *local_d0;
  long **pplStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  long *local_a0;
  long **pplStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  if ((DAT_09522e41 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0919f660);
    FUN_03f5c2a4(&DAT_0919f650);
    FUN_03f5c2a4(&DAT_0919f670);
    FUN_03f5c2a4(&DAT_09176a58);
    FUN_03f5c2a4(&DAT_091a6690);
    FUN_03f5c2a4(&DAT_091a6698);
    FUN_03f5c2a4(&DAT_091a66a0);
    FUN_03f5c2a4(&DAT_09185a58);
    FUN_03f5c2a4(&DAT_0917a928);
    FUN_03f5c2a4(&DAT_09185b10);
    FUN_03f5c2a4(&DAT_09187220);
    FUN_03f5c2a4(&DAT_091a97a8);
    FUN_03f5c2a4(&DAT_091a9840);
    FUN_03f5c2a4(&DAT_091a97b0);
    FUN_03f5c2a4(&DAT_091a9848);
    FUN_03f5c2a4(&DAT_0918a5a8);
    FUN_03f5c2a4(&DAT_0921d0b8);
    FUN_03f5c2a4(&DAT_0921d0b0);
    DAT_09522e41 = 1;
  }
  local_d8 = (long *)0x0;
  uStack_88 = 0;
  local_90 = 0;
  uStack_78 = 0;
  local_80 = 0;
  pplStack_98 = (long **)0x0;
  local_a0 = (long *)0x0;
  lVar2 = thunk_FUN_03f9944c(DAT_09176a58);
  FUN_06fc24fc(lVar2,DAT_0919f650);
  if ((param_1 != 0) && (*(long *)(param_1 + 0x18) != 0)) {
    FUN_06fc382c(&local_d0,*(long *)(param_1 + 0x18),DAT_0919f660);
    pplStack_98 = pplStack_c8;
    local_a0 = local_d0;
    uStack_88 = uStack_b8;
    local_90 = uStack_c0;
    uStack_78 = uStack_a8;
    local_80 = local_b0;
    local_d0 = (long *)0x0;
    pplStack_c8 = &local_a0;
    while (uVar3 = FUN_07271e30(&local_a0,DAT_091a6698), (uVar3 & 1) != 0) {
      if (lVar2 == 0) {
        if (*(long *)(lVar1 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        goto LAB_077a84f0;
      }
      FUN_06fc3390(lVar2,local_90,uStack_88,local_80,DAT_0919f670);
    }
    FUN_07271fac(&local_a0,DAT_091a6690);
  }
  if (param_2 != 0) {
    if (*(int *)(DAT_0918a5a8 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    lVar10 = *(long *)(*(long *)(DAT_0918a5a8 + 0xb8) + 0x10);
    if (lVar10 == 0) {
LAB_077a838c:
      if (*(long *)(lVar1 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      goto LAB_077a84f0;
    }
    if (0 < (int)*(ulong *)(lVar10 + 0x18)) {
      uVar3 = 0;
      uVar7 = *(ulong *)(lVar10 + 0x18) & 0xffffffff;
      do {
        if (uVar7 <= uVar3) {
          if (*(long *)(lVar1 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c558();
          }
          goto LAB_077a84f0;
        }
        uVar9 = *(undefined8 *)(lVar10 + 0x20 + uVar3 * 8);
        uVar4 = Newtonsoft_Json_Linq_JObject__get_Item(param_2,uVar9,0);
        if (*(int *)(DAT_0918a5a8 + 0xe4) == 0) {
          FUN_03f5c424(DAT_0918a5a8);
        }
        auVar11 = _GAME_SaveGame_SaveGameStats__Number(uVar4);
        if (lVar2 == 0) goto LAB_077a838c;
        FUN_06fc3390(lVar2,uVar9,auVar11._0_8_,auVar11._8_8_,DAT_0919f670);
        uVar7 = (ulong)*(uint *)(lVar10 + 0x18);
        uVar3 = uVar3 + 1;
      } while ((long)uVar3 < (long)(int)*(uint *)(lVar10 + 0x18));
    }
    plVar5 = (long *)Newtonsoft_Json_Linq_JObject__get_Item(param_2,DAT_0921d0b8,0);
    if (plVar5 != (long *)0x0) {
      if ((*(byte *)(DAT_09187220 + 0x130) <= *(byte *)(*plVar5 + 0x130)) &&
         (*(long *)(*(long *)(*plVar5 + 200) + (ulong)*(byte *)(DAT_09187220 + 0x130) * 8 + -8) ==
          DAT_09187220)) {
        local_d8 = (long *)Newtonsoft_Json_Linq_JObject__GetEnumerator(plVar5,0);
        pplStack_c8 = &local_d8;
        local_d0 = (long *)0x0;
        while (plVar5 = local_d8, local_d8 != (long *)0x0) {
          lVar10 = *local_d8;
          uVar3 = (ulong)*(ushort *)(lVar10 + 0x12e);
          if (uVar3 != 0) {
            piVar8 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
            do {
              if (*(long *)(piVar8 + -2) == DAT_09185b10) {
                puVar6 = (undefined8 *)(lVar10 + (long)*piVar8 * 0x10 + 0x138);
                goto LAB_077a8220;
              }
              uVar3 = uVar3 - 1;
              piVar8 = piVar8 + 4;
            } while (uVar3 != 0);
          }
          puVar6 = (undefined8 *)FUN_03f95da8(local_d8,DAT_09185b10,0);
LAB_077a8220:
          uVar3 = (*(code *)*puVar6)(plVar5,puVar6[1]);
          plVar5 = local_d8;
          if ((uVar3 & 1) == 0) {
            if (local_d8 == (long *)0x0) goto LAB_077a8358;
            lVar10 = *local_d8;
            uVar3 = (ulong)*(ushort *)(lVar10 + 0x12e);
            if (uVar3 == 0) goto LAB_077a832c;
            piVar8 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
            goto LAB_077a8314;
          }
          if (local_d8 == (long *)0x0) {
            if (*(long *)(lVar1 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            goto LAB_077a84f0;
          }
          lVar10 = *local_d8;
          uVar3 = (ulong)*(ushort *)(lVar10 + 0x12e);
          if (uVar3 != 0) {
            piVar8 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
            do {
              if (*(long *)(piVar8 + -2) == DAT_0917a928) {
                puVar6 = (undefined8 *)(lVar10 + (long)*piVar8 * 0x10 + 0x138);
                goto LAB_077a8284;
              }
              uVar3 = uVar3 - 1;
              piVar8 = piVar8 + 4;
            } while (uVar3 != 0);
          }
          puVar6 = (undefined8 *)FUN_03f95da8(local_d8,DAT_0917a928,0);
LAB_077a8284:
          auVar11 = (*(code *)*puVar6)(plVar5,puVar6[1]);
          uVar4 = System_String__Concat(DAT_0921d0b0,auVar11._0_8_,0);
          if (*(int *)(DAT_0918a5a8 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          auVar11 = _GAME_SaveGame_SaveGameStats__Number(auVar11._8_8_);
          if (lVar2 == 0) {
            if (*(long *)(lVar1 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            goto LAB_077a84f0;
          }
          FUN_06fc3390(lVar2,uVar4,auVar11._0_8_,auVar11._8_8_,DAT_0919f670);
        }
        if (*(long *)(lVar1 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        goto LAB_077a84f0;
      }
    }
  }
  goto LAB_077a8358;
  while( true ) {
    uVar3 = uVar3 - 1;
    piVar8 = piVar8 + 4;
    if (uVar3 == 0) break;
LAB_077a8314:
    if (*(long *)(piVar8 + -2) == DAT_09185a58) {
      puVar6 = (undefined8 *)(lVar10 + (long)*piVar8 * 0x10 + 0x138);
      goto LAB_077a8348;
    }
  }
LAB_077a832c:
  puVar6 = (undefined8 *)FUN_03f95da8(local_d8,DAT_09185a58,0);
LAB_077a8348:
  (*(code *)*puVar6)(plVar5,puVar6[1]);
LAB_077a8358:
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return lVar2;
  }
LAB_077a84f0:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

