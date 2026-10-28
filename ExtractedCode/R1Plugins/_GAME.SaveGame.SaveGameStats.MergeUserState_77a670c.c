// rea decompile_all
// name: _GAME.SaveGame.SaveGameStats$$MergeUserState
// address: 0x77a670c
// body: available
// range: 0x77a670c-0x77a73b3 inclusive
// range: 0x77a73b8-0x77a746f inclusive
// range: 0x77a7474-0x77a748b inclusive
// range: 0x77a7490-0x77a74a7 inclusive
// range: 0x77a7504-0x77a76d3 inclusive
// range: 0x77a7768-0x77a776b inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x77a73b0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77a746c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77a7488 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77a74a4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77a75cc to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77a75e4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77a75fc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77a7614 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77a762c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77a7644 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77a765c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77a7678 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verifi
// limitations_truncated: true; decompile-index.json keeps the complete list
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x077a7660) */
/* WARNING: Removing unreachable block (ram,0x077a7674) */
/* WARNING: Removing unreachable block (ram,0x077a7440) */
/* WARNING: Removing unreachable block (ram,0x077a76b8) */
/* WARNING: Removing unreachable block (ram,0x077a76cc) */

long * _GAME_SaveGame_SaveGameStats__MergeUserState(long param_1,long param_2,undefined8 param_3)

{
  uint uVar1;
  long lVar2;
  int iVar3;
  undefined4 uVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  long *plVar10;
  undefined8 uVar11;
  long *plVar12;
  long *plVar13;
  ulong uVar14;
  long lVar15;
  int *piVar16;
  ulong uVar17;
  undefined8 uVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  long *local_c0;
  long *local_b8;
  undefined1 local_b0 [16];
  undefined8 uStack_a0;
  long local_90;
  undefined8 uStack_88;
  undefined1 local_78 [16];
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  if ((DAT_09522e44 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c4d38);
    FUN_03f5c2a4(&DAT_091837d8);
    FUN_03f5c2a4(&DAT_091ca5c0);
    FUN_03f5c2a4(&DAT_091caae0);
    FUN_03f5c2a4(&DAT_091cb368);
    FUN_03f5c2a4(&DAT_09178c58);
    FUN_03f5c2a4(&DAT_091780f0);
    FUN_03f5c2a4(&DAT_09185a58);
    FUN_03f5c2a4(&DAT_0917a768);
    FUN_03f5c2a4(&DAT_0917a2a8);
    FUN_03f5c2a4(&DAT_0917a918);
    FUN_03f5c2a4(&DAT_0917ae48);
    FUN_03f5c2a4(&DAT_09185b10);
    FUN_03f5c2a4(&DAT_09187200);
    FUN_03f5c2a4(&DAT_091801f0);
    FUN_03f5c2a4(&DAT_09187220);
    FUN_03f5c2a4(&DAT_09187250);
    FUN_03f5c2a4(&DAT_09187278);
    FUN_03f5c2a4(&DAT_091a97a8);
    FUN_03f5c2a4(&DAT_091a97b0);
    FUN_03f5c2a4(&DAT_091b0570);
    FUN_03f5c2a4(&DAT_091b0590);
    FUN_03f5c2a4(&DAT_091b0558);
    FUN_03f5c2a4(&DAT_091b0608);
    FUN_03f5c2a4(&DAT_0917cce8);
    FUN_03f5c2a4(&DAT_09187e80);
    FUN_03f5c2a4(&DAT_0918a5a8);
    FUN_03f5c2a4(&DAT_091ef7c0);
    FUN_03f5c2a4(&DAT_091ef7c8);
    FUN_03f5c2a4(&DAT_09194170);
    FUN_03f5c2a4(&DAT_092210e0);
    FUN_03f5c2a4(&DAT_0921d0b8);
    FUN_03f5c2a4(&DAT_09218ec0);
    FUN_03f5c2a4(&DAT_0921d0b0);
    FUN_03f5c2a4(&DAT_09218eb8);
    DAT_09522e44 = 1;
  }
  local_c0 = (long *)0x0;
  local_b8 = (long *)0x0;
  lVar5 = param_1;
  if ((param_1 == 0) && (lVar5 = param_2, param_2 == 0)) {
    lVar5 = thunk_FUN_03f9944c(DAT_09187220);
    Newtonsoft_Json_Linq_JObject___ctor(lVar5,0);
    if (lVar5 == 0) goto LAB_077a75d0;
  }
  plVar6 = (long *)Newtonsoft_Json_Linq_JToken__DeepClone(lVar5,0);
  if (plVar6 != (long *)0x0) {
    if ((*(byte *)(*plVar6 + 0x130) < *(byte *)(DAT_09187220 + 0x130)) ||
       (*(long *)(*(long *)(*plVar6 + 200) + (ulong)*(byte *)(DAT_09187220 + 0x130) * 8 + -8) !=
        DAT_09187220)) {
      if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c8d0(plVar6);
      }
      goto LAB_077a7768;
    }
  }
  if (*(int *)(DAT_0918a5a8 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  lVar5 = *(long *)(*(long *)(DAT_0918a5a8 + 0xb8) + 0x10);
  if (lVar5 != 0) {
    if (0 < (int)*(ulong *)(lVar5 + 0x18)) {
      uVar17 = 0;
      uVar14 = *(ulong *)(lVar5 + 0x18) & 0xffffffff;
      do {
        if (uVar14 <= uVar17) goto LAB_077a75b8;
        uVar18 = *(undefined8 *)(lVar5 + 0x20 + uVar17 * 8);
        auVar19 = FUN_04a5f8f0(param_3,uVar18,DAT_091c4d38);
        uVar14 = System_String__op_Equality(uVar18,DAT_09218eb8,0);
        if ((uVar14 & 1) == 0) {
          uVar14 = System_String__op_Equality(uVar18,DAT_09218ec0,0);
          if ((uVar14 & 1) != 0) goto LAB_077a6a30;
          local_90 = 0;
          uStack_88 = 0;
          System_Decimal___ctor(&local_90,0x7fffffff,0);
          if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          local_b0._8_8_ = uStack_88;
          local_b0._0_8_ = local_90;
          local_78 = auVar19;
          if (DAT_09522f02 == '\0') {
            FUN_03f5c2a4(&DAT_091837d8);
            DAT_09522f02 = '\x01';
          }
          if (*(int *)(DAT_091837d8 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          puVar9 = (undefined8 *)System_Decimal__Min(local_b0,local_78,0);
          uVar8 = *puVar9;
          uVar11 = puVar9[1];
          if (*(int *)(DAT_091837d8 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          iVar3 = System_Decimal__op_Explicit(uVar8,uVar11,0);
          uVar8 = thunk_FUN_03f9944c(DAT_09187278);
          lVar7 = (long)iVar3;
        }
        else {
LAB_077a6a30:
          if (*(int *)(DAT_091837d8 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          lVar7 = System_Decimal__op_Explicit(auVar19._0_8_,auVar19._8_8_,0);
          uVar8 = thunk_FUN_03f9944c(DAT_09187278);
        }
        Newtonsoft_Json_Linq_JValue___ctor(uVar8,lVar7,0);
        if (plVar6 == (long *)0x0) goto LAB_077a75d0;
        Newtonsoft_Json_Linq_JObject__set_Item(plVar6,uVar18,uVar8,0);
        uVar14 = (ulong)*(uint *)(lVar5 + 0x18);
        uVar17 = uVar17 + 1;
      } while ((long)uVar17 < (long)(int)*(uint *)(lVar5 + 0x18));
    }
    if (*(int *)(DAT_0918a5a8 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    lVar5 = *(long *)(*(long *)(DAT_0918a5a8 + 0xb8) + 0x18);
    if (lVar5 != 0) {
      if (0 < (int)*(ulong *)(lVar5 + 0x18)) {
        uVar17 = 0;
        uVar14 = *(ulong *)(lVar5 + 0x18) & 0xffffffff;
        do {
          if (uVar14 <= uVar17) goto LAB_077a75b8;
          uVar18 = *(undefined8 *)(lVar5 + 0x20 + uVar17 * 8);
          if (param_1 == 0) {
            uVar8 = 0;
          }
          else {
            uVar8 = Newtonsoft_Json_Linq_JObject__get_Item(param_1,uVar18,0);
          }
          if (*(int *)(DAT_0918a5a8 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          auVar19 = _GAME_SaveGame_SaveGameStats__Number(uVar8);
          uVar8 = 0;
          if (param_2 != 0) {
            uVar8 = Newtonsoft_Json_Linq_JObject__get_Item(param_2,uVar18,0);
          }
          if (*(int *)(DAT_0918a5a8 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          auVar20 = _GAME_SaveGame_SaveGameStats__Number(uVar8);
          if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          local_b0 = auVar19;
          local_78 = auVar20;
          if (DAT_09522f03 == '\0') {
            FUN_03f5c2a4(&DAT_091837d8);
            DAT_09522f03 = '\x01';
          }
          if (*(int *)(DAT_091837d8 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          puVar9 = (undefined8 *)System_Decimal__Max(local_b0,local_78,0);
          uVar8 = *puVar9;
          uVar11 = puVar9[1];
          if (*(int *)(DAT_091837d8 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uVar4 = System_Decimal__op_Explicit(uVar8,uVar11,0);
          if (*(int *)(DAT_09187250 + 0xe4) == 0) {
            FUN_03f5c424(DAT_09187250);
          }
          uVar8 = Newtonsoft_Json_Linq_JToken__op_Implicit(uVar4,0);
          if (plVar6 == (long *)0x0) goto LAB_077a75d0;
          Newtonsoft_Json_Linq_JObject__set_Item(plVar6,uVar18,uVar8,0);
          uVar14 = (ulong)*(uint *)(lVar5 + 0x18);
          uVar17 = uVar17 + 1;
        } while ((long)uVar17 < (long)(int)*(uint *)(lVar5 + 0x18));
      }
      lVar5 = thunk_FUN_03f9944c(DAT_09187220);
      Newtonsoft_Json_Linq_JObject___ctor(lVar5,0);
      if (*(int *)(DAT_09194170 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      puVar9 = *(undefined8 **)(DAT_09194170 + 0xb8);
      lVar7 = puVar9[1];
      if (lVar7 == 0) {
        if (*(int *)(DAT_09194170 + 0xe4) == 0) {
          FUN_03f5c424();
          puVar9 = *(undefined8 **)(DAT_09194170 + 0xb8);
        }
        uVar18 = *puVar9;
        lVar7 = thunk_FUN_03f9944c(DAT_091780f0);
        FUN_05307b84(lVar7,uVar18,DAT_091ef7c0,0);
        plVar10 = (long *)(*(long *)(DAT_09194170 + 0xb8) + 8);
        *plVar10 = lVar7;
        thunk_FUN_03f5d7b8(plVar10,lVar7);
      }
      plVar10 = (long *)FUN_04b097b8(param_3,lVar7,DAT_091cb368);
      if (plVar10 != (long *)0x0) {
        lVar7 = *plVar10;
        uVar17 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar17 != 0) {
          piVar16 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar16 + -2) == DAT_0917a2a8) {
              puVar9 = (undefined8 *)(lVar7 + (long)*piVar16 * 0x10 + 0x138);
              goto LAB_077a6e1c;
            }
            uVar17 = uVar17 - 1;
            piVar16 = piVar16 + 4;
          } while (uVar17 != 0);
        }
        puVar9 = (undefined8 *)FUN_03f95da8(plVar10,DAT_0917a2a8,0);
LAB_077a6e1c:
        local_b8 = (long *)(*(code *)*puVar9)(plVar10,puVar9[1]);
        local_78._8_8_ = &local_b8;
        local_78._0_8_ = 0;
        while (plVar10 = local_b8, local_b8 != (long *)0x0) {
          lVar7 = *local_b8;
          uVar17 = (ulong)*(ushort *)(lVar7 + 0x12e);
          if (uVar17 != 0) {
            piVar16 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
            do {
              if (*(long *)(piVar16 + -2) == DAT_09185b10) {
                puVar9 = (undefined8 *)(lVar7 + (long)*piVar16 * 0x10 + 0x138);
                goto LAB_077a6ea8;
              }
              uVar17 = uVar17 - 1;
              piVar16 = piVar16 + 4;
            } while (uVar17 != 0);
          }
          puVar9 = (undefined8 *)FUN_03f95da8(local_b8,DAT_09185b10,0);
LAB_077a6ea8:
          uVar17 = (*(code *)*puVar9)(plVar10,puVar9[1]);
          plVar10 = local_b8;
          if ((uVar17 & 1) == 0) {
            if (local_b8 == (long *)0x0) goto LAB_077a6ffc;
            lVar7 = *local_b8;
            uVar17 = (ulong)*(ushort *)(lVar7 + 0x12e);
            if (uVar17 == 0) goto LAB_077a6fd4;
            piVar16 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
            goto LAB_077a6fbc;
          }
          if (local_b8 == (long *)0x0) {
            if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            goto LAB_077a7768;
          }
          lVar7 = *local_b8;
          uVar17 = (ulong)*(ushort *)(lVar7 + 0x12e);
          if (uVar17 != 0) {
            piVar16 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
            do {
              if (*(long *)(piVar16 + -2) == DAT_0917a918) {
                puVar9 = (undefined8 *)(lVar7 + (long)*piVar16 * 0x10 + 0x138);
                goto LAB_077a6f0c;
              }
              uVar17 = uVar17 - 1;
              piVar16 = piVar16 + 4;
            } while (uVar17 != 0);
          }
          puVar9 = (undefined8 *)FUN_03f95da8(local_b8,DAT_0917a918,0);
LAB_077a6f0c:
          (*(code *)*puVar9)(local_b0,plVar10,puVar9[1]);
          uVar8 = uStack_a0;
          uVar18 = local_b0._8_8_;
          auVar19._8_8_ = local_78._8_8_;
          auVar19._0_8_ = local_78._0_8_;
          if (DAT_0921d0b0 == 0) {
            if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            goto LAB_077a7768;
          }
          if (local_b0._0_8_ == 0) {
            local_78 = auVar19;
            if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            goto LAB_077a7768;
          }
          uVar11 = System_String__Substring(local_b0._0_8_,*(undefined4 *)(DAT_0921d0b0 + 0x10),0);
          if (*(int *)(DAT_09187250 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uVar18 = Newtonsoft_Json_Linq_JToken__op_Implicit(uVar18,uVar8,0);
          if (lVar5 == 0) {
            if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            goto LAB_077a7768;
          }
          Newtonsoft_Json_Linq_JObject__set_Item(lVar5,uVar11,uVar18,0);
        }
        if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        goto LAB_077a7768;
      }
    }
  }
  goto LAB_077a75d0;
LAB_077a73b8:
  if (local_c0 != (long *)0x0) {
    lVar7 = *local_c0;
    uVar14 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar14 != 0) {
      piVar16 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar16 + -2) == DAT_09185a58) {
          puVar9 = (undefined8 *)(lVar7 + (long)*piVar16 * 0x10 + 0x138);
          goto LAB_077a7420;
        }
        uVar14 = uVar14 - 1;
        piVar16 = piVar16 + 4;
      } while (uVar14 != 0);
    }
    puVar9 = (undefined8 *)FUN_03f95da8(local_c0,DAT_09185a58,0);
LAB_077a7420:
    (*(code *)*puVar9)(plVar12,puVar9[1]);
  }
  goto LAB_077a7444;
  while( true ) {
    uVar17 = uVar17 - 1;
    piVar16 = piVar16 + 4;
    if (uVar17 == 0) break;
LAB_077a6fbc:
    if (*(long *)(piVar16 + -2) == DAT_09185a58) {
      puVar9 = (undefined8 *)(lVar7 + (long)*piVar16 * 0x10 + 0x138);
      goto LAB_077a6ff0;
    }
  }
LAB_077a6fd4:
  puVar9 = (undefined8 *)FUN_03f95da8(local_b8,DAT_09185a58,0);
LAB_077a6ff0:
  (*(code *)*puVar9)(plVar10,puVar9[1]);
LAB_077a6ffc:
  if (plVar6 != (long *)0x0) {
    Newtonsoft_Json_Linq_JObject__set_Item(plVar6,DAT_0921d0b8,lVar5,0);
    lVar5 = thunk_FUN_03f9944c(DAT_0917cce8);
    FUN_057e0400(lVar5,DAT_091b0558);
    plVar10 = (long *)FUN_03f5c394(DAT_091801f0,2);
    if (plVar10 != (long *)0x0) {
      if (param_2 != 0) {
        lVar7 = thunk_FUN_03f99350(param_2,*(undefined8 *)(*plVar10 + 0x40));
        if (lVar7 != 0) goto LAB_077a7078;
LAB_077a7698:
        uVar18 = thunk_FUN_03fa6ef4();
        if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c414(uVar18,0);
        }
        goto LAB_077a7768;
      }
LAB_077a7078:
      if ((int)plVar10[3] != 0) {
        plVar10[4] = param_2;
        thunk_FUN_03f5d7b8(plVar10 + 4,param_2);
        if (param_1 != 0) {
          lVar7 = thunk_FUN_03f99350(param_1,*(undefined8 *)(*plVar10 + 0x40));
          if (lVar7 == 0) goto LAB_077a7698;
        }
        if ((*(uint *)(plVar10 + 3) & 0xfffffffe) != 0) {
          plVar10[5] = param_1;
          thunk_FUN_03f5d7b8(plVar10 + 5,param_1);
          if (0 < (int)plVar10[3]) {
            uVar17 = 0;
            uVar14 = plVar10[3] & 0xffffffff;
LAB_077a70e4:
            if (uVar14 <= uVar17) goto LAB_077a75b8;
            if (plVar10[uVar17 + 4] == 0) goto LAB_077a7444;
            plVar12 = (long *)Newtonsoft_Json_Linq_JObject__get_Item
                                        (plVar10[uVar17 + 4],DAT_092210e0,0);
            if (plVar12 != (long *)0x0) {
              if ((*(byte *)(DAT_09187200 + 0x130) <= *(byte *)(*plVar12 + 0x130)) &&
                 (*(long *)(*(long *)(*plVar12 + 200) + (ulong)*(byte *)(DAT_09187200 + 0x130) * 8 +
                           -8) == DAT_09187200)) {
                if (*(int *)(DAT_09194170 + 0xe4) == 0) {
                  FUN_03f5c424();
                }
                puVar9 = *(undefined8 **)(DAT_09194170 + 0xb8);
                lVar7 = puVar9[2];
                if (lVar7 == 0) {
                  if (*(int *)(DAT_09194170 + 0xe4) == 0) {
                    FUN_03f5c424();
                    puVar9 = *(undefined8 **)(DAT_09194170 + 0xb8);
                  }
                  uVar18 = *puVar9;
                  lVar7 = thunk_FUN_03f9944c(DAT_09178c58);
                  FUN_05324070(lVar7,uVar18,DAT_091ef7c8,0);
                  plVar13 = (long *)(*(long *)(DAT_09194170 + 0xb8) + 0x10);
                  *plVar13 = lVar7;
                  thunk_FUN_03f5d7b8(plVar13,lVar7);
                }
                plVar12 = (long *)FUN_04af8044(plVar12,lVar7,DAT_091ca5c0);
                if (plVar12 == (long *)0x0) goto LAB_077a75d0;
                lVar7 = *plVar12;
                uVar14 = (ulong)*(ushort *)(lVar7 + 0x12e);
                if (uVar14 != 0) {
                  piVar16 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar16 + -2) == DAT_0917a768) {
                      puVar9 = (undefined8 *)(lVar7 + (long)*piVar16 * 0x10 + 0x138);
                      goto LAB_077a722c;
                    }
                    uVar14 = uVar14 - 1;
                    piVar16 = piVar16 + 4;
                  } while (uVar14 != 0);
                }
                puVar9 = (undefined8 *)FUN_03f95da8(plVar12,DAT_0917a768,0);
LAB_077a722c:
                local_c0 = (long *)(*(code *)*puVar9)(plVar12,puVar9[1]);
                local_b0._8_8_ = &local_c0;
                local_b0._0_8_ = 0;
                if (local_c0 != (long *)0x0) {
                  do {
                    plVar12 = local_c0;
                    lVar7 = *local_c0;
                    uVar14 = (ulong)*(ushort *)(lVar7 + 0x12e);
                    if (uVar14 != 0) {
                      piVar16 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar16 + -2) == DAT_09185b10) {
                          puVar9 = (undefined8 *)(lVar7 + (long)*piVar16 * 0x10 + 0x138);
                          goto LAB_077a7298;
                        }
                        uVar14 = uVar14 - 1;
                        piVar16 = piVar16 + 4;
                      } while (uVar14 != 0);
                    }
                    puVar9 = (undefined8 *)FUN_03f95da8(local_c0,DAT_09185b10,0);
LAB_077a7298:
                    uVar14 = (*(code *)*puVar9)(plVar12,puVar9[1]);
                    plVar12 = local_c0;
                    if ((uVar14 & 1) == 0) goto LAB_077a73b8;
                    if (local_c0 == (long *)0x0) {
                      if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
                        FUN_03f5c550();
                      }
                      goto LAB_077a7768;
                    }
                    lVar7 = *local_c0;
                    uVar14 = (ulong)*(ushort *)(lVar7 + 0x12e);
                    if (uVar14 != 0) {
                      piVar16 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar16 + -2) == DAT_0917ae48) {
                          puVar9 = (undefined8 *)(lVar7 + (long)*piVar16 * 0x10 + 0x138);
                          goto LAB_077a72fc;
                        }
                        uVar14 = uVar14 - 1;
                        piVar16 = piVar16 + 4;
                      } while (uVar14 != 0);
                    }
                    puVar9 = (undefined8 *)FUN_03f95da8(local_c0,DAT_0917ae48,0);
LAB_077a72fc:
                    uVar18 = (*(code *)*puVar9)(plVar12,puVar9[1]);
                    uVar14 = System_String__IsNullOrEmpty(uVar18,0);
                    if ((uVar14 & 1) == 0) {
                      if (lVar5 == 0) {
                        if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
                          FUN_03f5c550();
                        }
                        goto LAB_077a7768;
                      }
                      uVar14 = FUN_057e1004(lVar5,uVar18,DAT_091b0590);
                      lVar7 = DAT_091b0570;
                      if ((uVar14 & 1) == 0) {
                        lVar15 = *(long *)(lVar5 + 0x10);
                        *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
                        if (lVar15 == 0) {
                          if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
                            FUN_03f5c550();
                          }
                          goto LAB_077a7768;
                        }
                        uVar1 = *(uint *)(lVar5 + 0x18);
                        if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                          *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                          puVar9 = (undefined8 *)(lVar15 + (long)(int)uVar1 * 8 + 0x20);
                          *puVar9 = uVar18;
                          thunk_FUN_03f5d7b8(puVar9,uVar18);
                        }
                        else {
                          FUN_057e0c68(lVar5,uVar18,
                                       *(undefined8 *)
                                        (*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70));
                        }
                      }
                    }
                    if (local_c0 == (long *)0x0) break;
                  } while( true );
                }
                if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
                  FUN_03f5c550();
                }
                goto LAB_077a7768;
              }
            }
LAB_077a7444:
            uVar14 = (ulong)*(uint *)(plVar10 + 3);
            uVar17 = uVar17 + 1;
            if ((long)(int)*(uint *)(plVar10 + 3) <= (long)uVar17) goto LAB_077a7504;
            goto LAB_077a70e4;
          }
LAB_077a7504:
          if (lVar5 != 0) {
            iVar3 = *(int *)(lVar5 + 0x18);
            if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            uVar4 = System_Math__Max(0,iVar3 + -100,0);
            uVar18 = FUN_04b020a8(lVar5,uVar4,DAT_091caae0);
            uVar8 = thunk_FUN_03f9944c(DAT_09187200);
            Newtonsoft_Json_Linq_JArray___ctor(uVar8,uVar18,0);
            Newtonsoft_Json_Linq_JObject__set_Item(plVar6,DAT_092210e0,uVar8,0);
            if (*(long *)(lVar2 + 0x28) == local_68) {
              return plVar6;
            }
            goto LAB_077a7768;
          }
          goto LAB_077a75d0;
        }
      }
LAB_077a75b8:
      if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c558();
      }
      goto LAB_077a7768;
    }
  }
LAB_077a75d0:
  if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
LAB_077a7768:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

