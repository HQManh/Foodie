// rea decompile_all
// name: Newtonsoft.Json.Bson.BsonBinaryWriter$$WriteTokenInternal
// address: 0x7718300
// body: available
// range: 0x7718300-0x77190ab inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x77187e4 to 0x7719214 Newtonsoft.Json.Bson.BsonBinaryWriter$$WriteString (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x7718b90 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7718d74 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7718f8c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7718f90 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7718f94 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7718f98 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7718f9c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7718fa0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7718fa4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7718fa8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7718fac to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent v
// limitations_truncated: true; decompile-index.json keeps the complete list
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x07718eec) */
/* WARNING: Removing unreachable block (ram,0x07718fc8) */

void Newtonsoft_Json_Bson_BsonBinaryWriter__WriteTokenInternal(long param_1,long *param_2)

{
  undefined1 uVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  code *UNRECOVERED_JUMPTABLE_00;
  ulong uVar8;
  int *piVar9;
  long *plVar10;
  long lVar11;
  long lVar12;
  long *plVar13;
  undefined8 local_80;
  long **pplStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_58;
  long *local_50;
  long local_48;
  long *local_38;
  
  if ((DAT_095229df & 1) == 0) {
    FUN_03f5c2a4(&DAT_09181fc8);
    FUN_03f5c2a4(&DAT_09181fd0);
    FUN_03f5c2a4(&DAT_09181fe0);
    FUN_03f5c2a4(&DAT_09181ff0);
    FUN_03f5c2a4(&DAT_09182018);
    FUN_03f5c2a4(&DAT_09182020);
    FUN_03f5c2a4(&DAT_09182030);
    FUN_03f5c2a4(&DAT_0917fc88);
    FUN_03f5c2a4(&DAT_09182b88);
    FUN_03f5c2a4(&DAT_09182ff8);
    FUN_03f5c2a4(&DAT_09183590);
    FUN_03f5c2a4(&DAT_091835c0);
    FUN_03f5c2a4(&DAT_09183548);
    FUN_03f5c2a4(&DAT_09185a58);
    FUN_03f5c2a4(&DAT_0917aa10);
    FUN_03f5c2a4(&DAT_0917aa08);
    FUN_03f5c2a4(&DAT_09185b10);
    FUN_03f5c2a4(&DAT_091b6f98);
    DAT_095229df = 1;
  }
  local_38 = (long *)0x0;
  local_50 = (long *)0x0;
  local_48 = 0;
  local_58 = 0;
  local_70 = 0;
  uStack_68 = 0;
  if (param_2 == (long *)0x0) goto LAB_07718fb0;
  uVar1 = (**(code **)(*param_2 + 0x178))(param_2,*(undefined8 *)(*param_2 + 0x180));
  uVar5 = DAT_0917fc88;
  switch(uVar1) {
  case 1:
    if ((*(byte *)(*param_2 + 0x130) < *(byte *)(DAT_09182030 + 0x130)) ||
       (*(long *)(*(long *)(*param_2 + 200) + (ulong)*(byte *)(DAT_09182030 + 0x130) * 8 + -8) !=
        DAT_09182030)) goto LAB_07718fb4;
    plVar10 = *(long **)(param_1 + 0x10);
    lVar11 = param_2[4];
    if (*(int *)(DAT_09182ff8 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar5 = System_Globalization_CultureInfo__get_InvariantCulture(0);
    if (*(int *)(DAT_09182b88 + 0xe4) == 0) {
      FUN_03f5c424(DAT_09182b88);
    }
    System_Convert__ToDouble(lVar11,uVar5,0);
    if (plVar10 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x07718508. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar10 + 0x248))(plVar10,*(undefined8 *)(*plVar10 + 0x250));
      return;
    }
    break;
  case 2:
    if ((*(byte *)(DAT_09182020 + 0x130) <= *(byte *)(*param_2 + 0x130)) &&
       (*(long *)(*(long *)(*param_2 + 200) + (ulong)*(byte *)(DAT_09182020 + 0x130) * 8 + -8) ==
        DAT_09182020)) {
      plVar10 = (long *)param_2[4];
      uVar3 = *(undefined4 *)((long)param_2 + 0x2c);
      local_80 = 0;
      FUN_05c3078c(&local_80,(int)param_2[3] + -4,DAT_091b6f98);
      if ((plVar10 == (long *)0x0) || (*plVar10 == DAT_09535468)) {
        Newtonsoft_Json_Bson_BsonBinaryWriter__WriteString(param_1,plVar10,uVar3,local_80);
        return;
      }
LAB_077190a8:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c8d0(plVar10);
    }
LAB_07718fb4:
                    /* WARNING: Subroutine does not return */
    FUN_03f5c8d0(param_2);
  case 3:
    if ((*(byte *)(*param_2 + 0x130) < *(byte *)(DAT_09181ff0 + 0x130)) ||
       (*(long *)(*(long *)(*param_2 + 200) + (ulong)*(byte *)(DAT_09181ff0 + 0x130) * 8 + -8) !=
        DAT_09181ff0)) goto LAB_07718fb4;
    plVar10 = *(long **)(param_1 + 0x10);
    if (plVar10 != (long *)0x0) {
      (**(code **)(*plVar10 + 0x278))(plVar10,(int)param_2[3],*(undefined8 *)(*plVar10 + 0x280));
      local_38 = (long *)Newtonsoft_Json_Bson_BsonObject__GetEnumerator(param_2);
      pplStack_78 = &local_38;
      local_80 = 0;
      do {
        plVar10 = local_38;
        if (local_38 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        lVar11 = *local_38;
        uVar8 = (ulong)*(ushort *)(lVar11 + 0x12e);
        if (uVar8 != 0) {
          piVar9 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == DAT_09185b10) {
              puVar4 = (undefined8 *)(lVar11 + (long)*piVar9 * 0x10 + 0x138);
              goto LAB_07718a44;
            }
            uVar8 = uVar8 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar8 != 0);
        }
        puVar4 = (undefined8 *)FUN_03f95da8(local_38,DAT_09185b10,0);
LAB_07718a44:
        uVar8 = (*(code *)*puVar4)(plVar10,puVar4[1]);
        plVar10 = local_38;
        if ((uVar8 & 1) == 0) {
          if (local_38 == (long *)0x0) goto LAB_07718ef0;
          lVar11 = *local_38;
          uVar8 = (ulong)*(ushort *)(lVar11 + 0x12e);
          if (uVar8 == 0) goto LAB_07718dc4;
          piVar9 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          goto LAB_07718dac;
        }
        if (local_38 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        lVar11 = *local_38;
        uVar8 = (ulong)*(ushort *)(lVar11 + 0x12e);
        if (uVar8 != 0) {
          piVar9 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == DAT_0917aa08) {
              puVar4 = (undefined8 *)(lVar11 + (long)*piVar9 * 0x10 + 0x138);
              goto LAB_07718aa8;
            }
            uVar8 = uVar8 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar8 != 0);
        }
        puVar4 = (undefined8 *)FUN_03f95da8(local_38,DAT_0917aa08,0);
LAB_07718aa8:
        lVar11 = (*(code *)*puVar4)(plVar10,puVar4[1]);
        if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        plVar10 = *(long **)(lVar11 + 0x18);
        if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        plVar13 = *(long **)(param_1 + 0x10);
        uVar8 = (**(code **)(*plVar10 + 0x178))(plVar10,*(undefined8 *)(*plVar10 + 0x180));
        if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550(uVar8,uVar8 & 0xffffffff);
        }
        (**(code **)(*plVar13 + 0x1f8))
                  (plVar13,uVar8 & 0xffffffff,*(undefined8 *)(*plVar13 + 0x200));
        lVar12 = *(long *)(lVar11 + 0x10);
        if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        plVar10 = *(long **)(lVar12 + 0x20);
        if ((plVar10 != (long *)0x0) && (*plVar10 != DAT_09535468)) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c8d0(plVar10,DAT_09535468,*(undefined4 *)(lVar12 + 0x2c));
        }
        Newtonsoft_Json_Bson_BsonBinaryWriter__WriteString
                  (param_1,plVar10,*(undefined4 *)(lVar12 + 0x2c),0);
        Newtonsoft_Json_Bson_BsonBinaryWriter__WriteTokenInternal
                  (param_1,*(undefined8 *)(lVar11 + 0x18));
      } while( true );
    }
    break;
  case 4:
    if ((*(byte *)(*param_2 + 0x130) < *(byte *)(DAT_09181fc8 + 0x130)) ||
       (*(long *)(*(long *)(*param_2 + 200) + (ulong)*(byte *)(DAT_09181fc8 + 0x130) * 8 + -8) !=
        DAT_09181fc8)) goto LAB_07718fb4;
    plVar10 = *(long **)(param_1 + 0x10);
    if (plVar10 != (long *)0x0) {
      (**(code **)(*plVar10 + 0x278))(plVar10,(int)param_2[3],*(undefined8 *)(*plVar10 + 0x280));
      local_48 = 0;
      plVar10 = (long *)Newtonsoft_Json_Bson_BsonArray__GetEnumerator(param_2);
      pplStack_78 = &local_50;
      local_80 = 0;
      do {
        local_50 = plVar10;
        if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        lVar11 = *plVar10;
        uVar8 = (ulong)*(ushort *)(lVar11 + 0x12e);
        if (uVar8 != 0) {
          piVar9 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == DAT_09185b10) {
              puVar4 = (undefined8 *)(lVar11 + (long)*piVar9 * 0x10 + 0x138);
              goto LAB_07718c68;
            }
            uVar8 = uVar8 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar8 != 0);
        }
        puVar4 = (undefined8 *)FUN_03f95da8(plVar10,DAT_09185b10,0);
LAB_07718c68:
        uVar8 = (*(code *)*puVar4)(plVar10,puVar4[1]);
        plVar10 = local_50;
        if ((uVar8 & 1) == 0) {
          if (local_50 == (long *)0x0) goto LAB_07718ef0;
          lVar11 = *local_50;
          uVar8 = (ulong)*(ushort *)(lVar11 + 0x12e);
          if (uVar8 == 0) goto LAB_07718e20;
          piVar9 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          goto LAB_07718e08;
        }
        if (local_50 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        lVar11 = *local_50;
        uVar8 = (ulong)*(ushort *)(lVar11 + 0x12e);
        if (uVar8 != 0) {
          piVar9 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == DAT_0917aa10) {
              puVar4 = (undefined8 *)(lVar11 + (long)*piVar9 * 0x10 + 0x138);
              goto LAB_07718ccc;
            }
            uVar8 = uVar8 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar8 != 0);
        }
        puVar4 = (undefined8 *)FUN_03f95da8(local_50,DAT_0917aa10,0);
LAB_07718ccc:
        plVar10 = (long *)(*(code *)*puVar4)(plVar10,puVar4[1]);
        if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        plVar13 = *(long **)(param_1 + 0x10);
        uVar8 = (**(code **)(*plVar10 + 0x178))(plVar10,*(undefined8 *)(*plVar10 + 0x180));
        if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550(uVar8,uVar8 & 0xffffffff);
        }
        (**(code **)(*plVar13 + 0x1f8))
                  (plVar13,uVar8 & 0xffffffff,*(undefined8 *)(*plVar13 + 0x200));
        if (*(int *)(DAT_09182ff8 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar5 = System_Globalization_CultureInfo__get_InvariantCulture(0);
        uVar5 = System_UInt64__ToString(&local_48,uVar5,0);
        uVar3 = Newtonsoft_Json_Utilities_MathUtils__IntLength(local_48,0);
        Newtonsoft_Json_Bson_BsonBinaryWriter__WriteString(param_1,uVar5,uVar3,0);
        Newtonsoft_Json_Bson_BsonBinaryWriter__WriteTokenInternal(param_1,plVar10);
        local_48 = local_48 + 1;
        plVar10 = local_50;
      } while( true );
    }
    break;
  case 5:
    if ((*(byte *)(*param_2 + 0x130) < *(byte *)(DAT_09181fd0 + 0x130)) ||
       (*(long *)(*(long *)(*param_2 + 200) + (ulong)*(byte *)(DAT_09181fd0 + 0x130) * 8 + -8) !=
        DAT_09181fd0)) goto LAB_07718fb4;
    lVar12 = param_2[4];
    if (lVar12 == 0) break;
    lVar11 = thunk_FUN_03f99350(lVar12,DAT_0917fc88);
    if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c8d0(lVar12,uVar5);
    }
    plVar10 = *(long **)(param_1 + 0x10);
    if (plVar10 == (long *)0x0) break;
    (**(code **)(*plVar10 + 0x278))
              (plVar10,*(undefined4 *)(lVar11 + 0x18),*(undefined8 *)(*plVar10 + 0x280));
    plVar10 = *(long **)(param_1 + 0x10);
    if (plVar10 == (long *)0x0) break;
    (**(code **)(*plVar10 + 0x1e8))
              (plVar10,*(undefined1 *)((long)param_2 + 0x29),*(undefined8 *)(*plVar10 + 0x1f0));
    plVar10 = *(long **)(param_1 + 0x10);
    if (plVar10 == (long *)0x0) break;
    lVar12 = *plVar10;
    goto LAB_07718e40;
  case 6:
  case 10:
    goto switchD_07718450_caseD_6;
  case 7:
    if ((*(byte *)(*param_2 + 0x130) < *(byte *)(DAT_09182030 + 0x130)) ||
       (*(long *)(*(long *)(*param_2 + 200) + (ulong)*(byte *)(DAT_09182030 + 0x130) * 8 + -8) !=
        DAT_09182030)) goto LAB_07718fb4;
    lVar12 = param_2[4];
    if (lVar12 == 0) {
      lVar11 = 0;
    }
    else {
      lVar11 = thunk_FUN_03f99350(lVar12,DAT_0917fc88);
      if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c8d0(lVar12,uVar5);
      }
    }
    plVar10 = *(long **)(param_1 + 0x10);
    if (plVar10 == (long *)0x0) break;
    lVar12 = *plVar10;
LAB_07718e40:
    uVar5 = *(undefined8 *)(lVar12 + 0x210);
    UNRECOVERED_JUMPTABLE_00 = *(code **)(lVar12 + 0x208);
LAB_07718e48:
                    /* WARNING: Could not recover jumptable at 0x07718e5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)(plVar10,lVar11,uVar5);
    return;
  case 8:
    plVar10 = *(long **)(param_1 + 0x10);
    if (*(int *)(DAT_09181fe0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    if (plVar10 != (long *)0x0) {
      UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar10 + 0x1d8);
      uVar5 = *(undefined8 *)(*plVar10 + 0x1e0);
      uVar2 = (uint)(*(long **)(*(long *)(DAT_09181fe0 + 0xb8) + 8) == param_2);
LAB_077188c8:
                    /* WARNING: Could not recover jumptable at 0x077188e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE_00)(plVar10,uVar2,uVar5);
      return;
    }
    break;
  case 9:
    if ((*(byte *)(*param_2 + 0x130) < *(byte *)(DAT_09182030 + 0x130)) ||
       (*(long *)(*(long *)(*param_2 + 200) + (ulong)*(byte *)(DAT_09182030 + 0x130) * 8 + -8) !=
        DAT_09182030)) goto LAB_07718fb4;
    plVar10 = (long *)param_2[4];
    if (plVar10 != (long *)0x0) {
      if (*plVar10 == DAT_09183548) {
        puVar4 = (undefined8 *)thunk_FUN_03f99594();
        uVar5 = *puVar4;
        local_58 = uVar5;
        if (*(int *)(param_1 + 0x20) == 2) {
          if (*(int *)(DAT_09183548 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uVar5 = System_DateTime__ToLocalTime(&local_58,0);
        }
        else if (*(int *)(param_1 + 0x20) == 1) {
          if (*(int *)(DAT_09183548 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uVar5 = System_DateTime__ToUniversalTime(&local_58,0);
        }
        local_58 = uVar5;
        if (*(int *)(DAT_091835c0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar5 = Newtonsoft_Json_Utilities_DateTimeUtils__ConvertDateTimeToJavaScriptTicks(uVar5,0,0)
        ;
      }
      else {
        if (*(long *)(*plVar10 + 0x40) != *(long *)(DAT_09183590 + 0x40)) goto LAB_077190a8;
        puVar4 = (undefined8 *)thunk_FUN_03f99594();
        uStack_68 = puVar4[1];
        local_70 = *puVar4;
        if (*(int *)(DAT_09183590 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar5 = System_DateTimeOffset__get_UtcDateTime(&local_70,0);
        uVar6 = System_DateTimeOffset__get_Offset(&local_70,0);
        if (*(int *)(DAT_091835c0 + 0xe4) == 0) {
          FUN_03f5c424(DAT_091835c0);
        }
        uVar5 = Newtonsoft_Json_Utilities_DateTimeUtils__ConvertDateTimeToJavaScriptTicks
                          (uVar5,uVar6,0);
      }
      plVar10 = *(long **)(param_1 + 0x10);
      if (plVar10 != (long *)0x0) {
        (**(code **)(*plVar10 + 0x298))(plVar10,uVar5,*(undefined8 *)(*plVar10 + 0x2a0));
        return;
      }
    }
    break;
  case 0xb:
    if ((*(byte *)(*param_2 + 0x130) < *(byte *)(DAT_09182018 + 0x130)) ||
       (*(long *)(*(long *)(*param_2 + 200) + (ulong)*(byte *)(DAT_09182018 + 0x130) * 8 + -8) !=
        DAT_09182018)) goto LAB_07718fb4;
    lVar11 = param_2[4];
    if (lVar11 != 0) {
      plVar10 = *(long **)(lVar11 + 0x20);
      uVar3 = *(undefined4 *)(lVar11 + 0x2c);
      if ((plVar10 == (long *)0x0) || (*plVar10 == DAT_09535468)) {
        Newtonsoft_Json_Bson_BsonBinaryWriter__WriteString(param_1,plVar10,uVar3,0);
        lVar11 = param_2[5];
        if (lVar11 == 0) break;
        plVar10 = *(long **)(lVar11 + 0x20);
        uVar3 = *(undefined4 *)(lVar11 + 0x2c);
        if ((plVar10 == (long *)0x0) || (*plVar10 == DAT_09535468)) {
          Newtonsoft_Json_Bson_BsonBinaryWriter__WriteString(param_1,plVar10,uVar3,0);
          return;
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_03f5c8d0(plVar10,DAT_09535468,uVar3);
    }
    break;
  default:
    thunk_FUN_03fc39d4(&DAT_09182ff8);
    FUN_039afb80();
    uVar5 = System_Globalization_CultureInfo__get_InvariantCulture(0);
    FUN_039b1d98(param_2);
    uVar1 = (**(code **)(*param_2 + 0x178))(param_2,*(undefined8 *)(*param_2 + 0x180));
    local_80 = CONCAT71(local_80._1_7_,uVar1);
    uVar6 = thunk_FUN_03fc39d4(&DAT_09182028);
    uVar6 = FUN_03f5c42c(uVar6,&local_80);
    uVar7 = thunk_FUN_03fc39d4(&DAT_09211f30);
    uVar5 = Newtonsoft_Json_Utilities_StringUtils__FormatWith(uVar7,uVar5,uVar6,0);
    thunk_FUN_03fc39d4(&DAT_09181558);
    uVar6 = thunk_FUN_03f9944c();
    uVar7 = thunk_FUN_03fc39d4(&DAT_09223b08);
    System_ArgumentOutOfRangeException___ctor(uVar6,uVar7,uVar5,0);
    uVar5 = thunk_FUN_03fc39d4(&DAT_091c4168);
                    /* WARNING: Subroutine does not return */
    FUN_03f5c414(uVar6,uVar5);
  case 0x10:
    if ((*(byte *)(*param_2 + 0x130) < *(byte *)(DAT_09182030 + 0x130)) ||
       (*(long *)(*(long *)(*param_2 + 200) + (ulong)*(byte *)(DAT_09182030 + 0x130) * 8 + -8) !=
        DAT_09182030)) goto LAB_07718fb4;
    plVar10 = *(long **)(param_1 + 0x10);
    lVar11 = param_2[4];
    if (*(int *)(DAT_09182ff8 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar5 = System_Globalization_CultureInfo__get_InvariantCulture(0);
    if (*(int *)(DAT_09182b88 + 0xe4) == 0) {
      FUN_03f5c424(DAT_09182b88);
    }
    uVar2 = System_Convert__ToInt32(lVar11,uVar5,0);
    if (plVar10 != (long *)0x0) {
      uVar5 = *(undefined8 *)(*plVar10 + 0x280);
      UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar10 + 0x278);
      goto LAB_077188c8;
    }
    break;
  case 0x12:
    if ((*(byte *)(*param_2 + 0x130) < *(byte *)(DAT_09182030 + 0x130)) ||
       (*(long *)(*(long *)(*param_2 + 200) + (ulong)*(byte *)(DAT_09182030 + 0x130) * 8 + -8) !=
        DAT_09182030)) goto LAB_07718fb4;
    plVar10 = *(long **)(param_1 + 0x10);
    lVar11 = param_2[4];
    if (*(int *)(DAT_09182ff8 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar5 = System_Globalization_CultureInfo__get_InvariantCulture(0);
    if (*(int *)(DAT_09182b88 + 0xe4) == 0) {
      FUN_03f5c424(DAT_09182b88);
    }
    lVar11 = System_Convert__ToInt64(lVar11,uVar5,0);
    if (plVar10 == (long *)0x0) break;
    uVar5 = *(undefined8 *)(*plVar10 + 0x2a0);
    UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar10 + 0x298);
    goto LAB_07718e48;
  }
  goto LAB_07718fb0;
  while( true ) {
    uVar8 = uVar8 - 1;
    piVar9 = piVar9 + 4;
    if (uVar8 == 0) break;
LAB_07718e08:
    if (*(long *)(piVar9 + -2) == DAT_09185a58) {
      puVar4 = (undefined8 *)(lVar11 + (long)*piVar9 * 0x10 + 0x138);
      goto LAB_07718ed4;
    }
  }
LAB_07718e20:
  puVar4 = (undefined8 *)FUN_03f95da8(local_50,DAT_09185a58,0);
LAB_07718ed4:
  (*(code *)*puVar4)(plVar10,puVar4[1]);
  goto LAB_07718ef0;
  while( true ) {
    uVar8 = uVar8 - 1;
    piVar9 = piVar9 + 4;
    if (uVar8 == 0) break;
LAB_07718dac:
    if (*(long *)(piVar9 + -2) == DAT_09185a58) {
      puVar4 = (undefined8 *)(lVar11 + (long)*piVar9 * 0x10 + 0x138);
      goto LAB_07718eac;
    }
  }
LAB_07718dc4:
  puVar4 = (undefined8 *)FUN_03f95da8(local_38,DAT_09185a58,0);
LAB_07718eac:
  (*(code *)*puVar4)(plVar10,puVar4[1]);
LAB_07718ef0:
  plVar10 = *(long **)(param_1 + 0x10);
  if (plVar10 != (long *)0x0) {
    (**(code **)(*plVar10 + 0x1e8))(plVar10,0,*(undefined8 *)(*plVar10 + 0x1f0));
switchD_07718450_caseD_6:
    return;
  }
LAB_07718fb0:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

