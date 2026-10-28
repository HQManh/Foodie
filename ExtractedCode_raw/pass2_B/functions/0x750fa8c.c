// rea decompile_all
// name: System.TimeZoneInfo$$CreateLocalUnity
// address: 0x750fa8c
// body: available
// range: 0x750fa8c-0x750ff57 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x750ff08 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x750ff0c to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x750ff54 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_TimeZoneInfo__CreateLocalUnity(void)

{
  undefined4 uVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  long extraout_x1;
  long extraout_x1_00;
  undefined8 *puVar8;
  uint uVar9;
  long lVar10;
  undefined8 uVar11;
  int iVar12;
  long lVar13;
  long lVar14;
  undefined1 auVar15 [16];
  undefined8 local_90;
  undefined2 local_84 [2];
  undefined8 local_80;
  undefined1 local_74 [4];
  long local_70;
  long local_68;
  
  if ((DAT_0952171d & 1) == 0) {
    FUN_03f5c2a4(&DAT_09175bf0);
    FUN_03f5c2a4(&DAT_09183548);
    FUN_03f5c2a4(&DAT_091b3e90);
    FUN_03f5c2a4(&DAT_091b3e98);
    FUN_03f5c2a4(&DAT_091b3ea0);
    FUN_03f5c2a4(&DAT_091b3e80);
    FUN_03f5c2a4(&DAT_091b3ea8);
    FUN_03f5c2a4(&DAT_0917d828);
    FUN_03f5c2a4(&DAT_0918bd60);
    FUN_03f5c2a4(&DAT_0918bdc0);
    FUN_03f5c2a4(&DAT_091f0d98);
    FUN_03f5c2a4(&DAT_09195090);
    FUN_03f5c2a4(&DAT_0921cb38);
    FUN_03f5c2a4(&DAT_091f8418);
    FUN_03f5c2a4(&DAT_09207090);
    FUN_03f5c2a4(&DAT_091f80d0);
    DAT_0952171d = 1;
  }
  local_70 = 0;
  local_68 = 0;
  local_74[0] = 0;
  local_80 = 0;
  local_84[0] = 0;
  local_90 = 0;
  lVar2 = thunk_FUN_03f9944c(DAT_0917d828);
  FUN_057e0400(lVar2,DAT_091b3e80);
  if (*(int *)(DAT_09183548 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  local_90 = System_DateTime__get_UtcNow(0);
  uVar1 = System_DateTime__get_Year(&local_90,0);
  uVar9 = 0x7f6;
  do {
    uVar9 = uVar9 - 1;
    uVar3 = System_CurrentSystemTimeZone__GetTimeZoneData(uVar9,&local_68,&local_70,local_74,0);
    if ((uVar3 & 1) == 0) goto LAB_0750ff10;
    if (local_68 == 0) goto LAB_0750ff08;
    if ((*(uint *)(local_68 + 0x18) & 0xfffffffc) == 0) goto LAB_0750ff0c;
    lVar14 = *(long *)(local_68 + 0x38);
    if (lVar14 != 0) {
      if (local_70 == 0) goto LAB_0750ff08;
      if ((*(uint *)(local_70 + 0x18) & 0xfffffffe) == 0) goto LAB_0750ff0c;
      lVar10 = *(long *)(local_70 + 0x28);
      goto LAB_0750fc88;
    }
  } while (0x7b3 < uVar9);
  lVar10 = 0;
LAB_0750fc88:
  uVar3 = System_CurrentSystemTimeZone__GetTimeZoneData(uVar1,&local_68,&local_70,local_74,0);
  if ((uVar3 & 1) == 0) {
LAB_0750ff10:
    thunk_FUN_03fc39d4(&DAT_09188920);
    uVar11 = thunk_FUN_03f9944c();
    uVar4 = thunk_FUN_03fc39d4(&DAT_091fd768);
    System_NotSupportedException___ctor(uVar11,uVar4,0);
    uVar4 = thunk_FUN_03fc39d4(&DAT_091db730);
                    /* WARNING: Subroutine does not return */
    FUN_03f5c414(uVar11,uVar4);
  }
  if (local_68 != 0) {
    if (*(uint *)(local_68 + 0x18) < 3) {
LAB_0750ff0c:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c558();
    }
    uVar11 = *(undefined8 *)(local_68 + 0x30);
    if (*(int *)(DAT_0918bd60 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    local_80 = System_TimeSpan__FromTicks(uVar11,0);
    uVar3 = System_TimeSpan__op_GreaterThanOrEqual
                      (local_80,**(undefined8 **)(DAT_0918bd60 + 0xb8),0);
    local_84[0] = 0x2b;
    if ((uVar3 & 1) == 0) {
      local_84[0] = 0x2d;
    }
    if (*(int *)(DAT_09535460 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar11 = System_Char__ToString(local_84);
    if (*(int *)(DAT_0918bd60 + 0xe4) == 0) {
      FUN_03f5c424(DAT_0918bd60);
    }
    uVar4 = System_TimeSpan__ToString(&local_80,DAT_0921cb38,0);
    auVar15 = System_String__Concat(DAT_091f80d0,uVar11,uVar4,DAT_091f8418,0);
    lVar5 = auVar15._8_8_;
    if (local_70 != 0) {
      if (*(int *)(local_70 + 0x18) == 0) goto LAB_0750ff0c;
      uVar11 = *(undefined8 *)(local_70 + 0x20);
      if (lVar10 == 0) {
        if (*(int *)(local_70 + 0x18) == 1) goto LAB_0750ff0c;
        lVar10 = *(long *)(local_70 + 0x28);
      }
      if (lVar14 == 0) {
        if (lVar2 != 0) goto LAB_0750fe8c;
      }
      else {
        iVar12 = 0x7b3;
        do {
          if (*(int *)(DAT_0918bdc0 + 0xe4) == 0) {
            FUN_03f5c424(DAT_0918bdc0,lVar5);
          }
          lVar5 = System_TimeZoneInfo__CreateAdjustmentRule(iVar12,&local_68,&local_70);
          if (lVar5 == 0) goto LAB_0750ff08;
          if (0 < *(int *)(lVar5 + 0x18)) {
            if (lVar2 == 0) goto LAB_0750ff08;
            FUN_057e0e78(lVar2,lVar5,DAT_091b3e90);
            lVar5 = extraout_x1;
          }
          iVar12 = iVar12 + 1;
        } while (iVar12 != 0x7f6);
        if (*(int *)(DAT_09195090 + 0xe4) == 0) {
          FUN_03f5c424(DAT_09195090,lVar5);
          lVar5 = extraout_x1_00;
        }
        puVar8 = *(undefined8 **)(DAT_09195090 + 0xb8);
        lVar13 = puVar8[6];
        if (lVar13 == 0) {
          if (*(int *)(DAT_09195090 + 0xe4) == 0) {
            FUN_03f5c424(DAT_09195090,lVar5);
            puVar8 = *(undefined8 **)(DAT_09195090 + 0xb8);
          }
          uVar4 = *puVar8;
          lVar13 = thunk_FUN_03f9944c(DAT_09175bf0);
          FUN_06d4541c(lVar13,uVar4,DAT_091f0d98,0);
          plVar6 = (long *)(*(long *)(DAT_09195090 + 0xb8) + 0x30);
          *plVar6 = lVar13;
          thunk_FUN_03f5d7b8(plVar6,lVar13);
        }
        if (lVar2 != 0) {
          FUN_057e280c(lVar2,lVar13,DAT_091b3e98);
LAB_0750fe8c:
          uVar4 = local_80;
          uVar7 = FUN_057e28a4(lVar2,DAT_091b3ea0);
          if (*(int *)(DAT_0918bdc0 + 0xe4) == 0) {
            FUN_03f5c424(DAT_0918bdc0);
          }
          System_TimeZoneInfo__CreateCustomTimeZone
                    (DAT_09207090,uVar4,auVar15._0_8_,uVar11,lVar10,uVar7,lVar14 == 0);
          return;
        }
      }
    }
  }
LAB_0750ff08:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

