// rea decompile_all
// name: System.TimeZoneInfo$$.ctor
// address: 0x750d3c4
// body: available
// range: 0x750d3c4-0x750d85b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x750d854 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x750d858 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Type propagation algorithm not settling */

void System_TimeZoneInfo___ctor(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  byte bVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  ulong uVar9;
  long *plVar10;
  undefined8 *puVar11;
  long lVar12;
  undefined8 uVar13;
  long lVar14;
  uint uVar15;
  long local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  long local_98;
  long local_90;
  long local_88 [5];
  
  if ((DAT_095216d4 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09183548);
    FUN_03f5c2a4(&DAT_0918bd60);
    FUN_03f5c2a4(&DAT_0918bdc0);
    FUN_03f5c2a4(&DAT_09207090);
    DAT_095216d4 = 1;
  }
  local_90 = 0;
  local_88[0] = 0;
  local_a0 = 0;
  local_98 = 0;
  local_88[2] = 0;
  local_88[1] = 0;
  local_88[4] = 0;
  local_88[3] = 0;
  local_a8 = 0;
  local_b8 = 0;
  local_b0 = 0;
  System_Object___ctor(param_1,0);
  if (*(int *)(DAT_0918bdc0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  System_TimeZoneInfo__TZif_ParseRaw
            (param_2,local_88 + 1,local_88,&local_90,&local_98,&local_a0,&local_a8,&local_b0,
             &local_b8);
  *(undefined8 *)(param_1 + 0x10) = param_3;
  thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x10),param_3);
  puVar11 = (undefined8 *)(param_1 + 0x18);
  *puVar11 = DAT_09207090;
  thunk_FUN_03f5d7b8(puVar11);
  if (*(int *)(DAT_0918bd60 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  lVar14 = DAT_09183548;
  plVar10 = (long *)(param_1 + 0x30);
  *plVar10 = **(long **)(DAT_0918bd60 + 0xb8);
  if (*(int *)(lVar14 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar8 = System_DateTime__get_UtcNow(0);
  if (local_88[0] != 0) {
    uVar15 = 0;
    do {
      if ((int)*(uint *)(local_88[0] + 0x18) <= (int)uVar15) {
LAB_0750d648:
        if (*(long *)(local_88[0] + 0x18) != 0) goto LAB_0750d650;
        if (local_98 != 0) {
          lVar14 = 0;
          uVar9 = 0;
          goto LAB_0750d7a4;
        }
        break;
      }
      if (*(uint *)(local_88[0] + 0x18) <= uVar15) goto LAB_0750d858;
      uVar13 = *(undefined8 *)(local_88[0] + (long)(int)uVar15 * 8 + 0x20);
      if (*(int *)(DAT_09183548 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar9 = System_DateTime__op_LessThanOrEqual(uVar13,uVar8,0);
      uVar13 = local_a0;
      if ((uVar9 & 1) == 0) {
        if (local_88[0] != 0) goto LAB_0750d648;
        break;
      }
      if (local_90 == 0) break;
      if (*(uint *)(local_90 + 0x18) <= uVar15) goto LAB_0750d858;
      if (local_98 == 0) break;
      bVar1 = *(byte *)(local_90 + (int)uVar15 + 0x20);
      uVar9 = (ulong)bVar1;
      if (*(uint *)(local_98 + 0x18) <= (uint)bVar1) goto LAB_0750d858;
      lVar14 = local_98 + 0x20;
      if (*(char *)(lVar14 + (ulong)(uint)bVar1 * 0x10 + 8) == '\0') {
        *plVar10 = *(long *)(lVar14 + uVar9 * 0x10);
        if (*(uint *)(local_98 + 0x18) <= (uint)bVar1) goto LAB_0750d858;
        uVar2 = *(undefined1 *)(lVar14 + uVar9 * 0x10 + 9);
        if (*(int *)(DAT_0918bdc0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar13 = System_TimeZoneInfo__TZif_GetZoneAbbreviation(uVar13,uVar2);
        *(undefined8 *)(param_1 + 0x20) = uVar13;
        lVar14 = param_1 + 0x20;
      }
      else {
        uVar2 = *(undefined1 *)(lVar14 + uVar9 * 0x10 + 9);
        if (*(int *)(DAT_0918bdc0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar13 = System_TimeZoneInfo__TZif_GetZoneAbbreviation(uVar13,uVar2);
        *(undefined8 *)(param_1 + 0x28) = uVar13;
        lVar14 = param_1 + 0x28;
      }
      thunk_FUN_03f5d7b8(lVar14,uVar13);
      uVar15 = uVar15 + 1;
    } while (local_88[0] != 0);
  }
  goto LAB_0750d854;
  while( true ) {
    lVar12 = local_98 + lVar14;
    if (*(char *)(lVar12 + 0x28) == '\0') {
      *plVar10 = *(long *)(lVar12 + 0x20);
      if (*(uint *)(local_98 + 0x18) <= uVar9) goto LAB_0750d858;
      uVar2 = *(undefined1 *)(local_98 + lVar14 + 0x29);
      if (*(int *)(DAT_0918bdc0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar8 = System_TimeZoneInfo__TZif_GetZoneAbbreviation(uVar8,uVar2);
      *(undefined8 *)(param_1 + 0x20) = uVar8;
      lVar12 = param_1 + 0x20;
    }
    else {
      uVar2 = *(undefined1 *)(lVar12 + 0x29);
      if (*(int *)(DAT_0918bdc0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar8 = System_TimeZoneInfo__TZif_GetZoneAbbreviation(uVar8,uVar2);
      *(undefined8 *)(param_1 + 0x28) = uVar8;
      lVar12 = param_1 + 0x28;
    }
    thunk_FUN_03f5d7b8(lVar12,uVar8);
    uVar9 = uVar9 + 1;
    lVar14 = lVar14 + 0x10;
    if (local_98 == 0) break;
LAB_0750d7a4:
    uVar8 = local_a0;
    if ((long)(int)*(uint *)(local_98 + 0x18) <= (long)uVar9) {
LAB_0750d650:
      *puVar11 = *(undefined8 *)(param_1 + 0x20);
      thunk_FUN_03f5d7b8(puVar11);
      if (*(int *)(DAT_0918bd60 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      lVar14 = *plVar10 * -0x6832fd919f07a5f5;
      lVar12 = *plVar10;
      if (0x72884f610 < (lVar14 + 0x72884f61000U >> 9 | lVar14 << 0x37)) {
        if (*(int *)(DAT_0918bd60 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar6 = System_TimeSpan__get_Hours(plVar10,0);
        uVar7 = System_TimeSpan__get_Minutes(plVar10,0);
        local_c0 = 0;
        System_TimeSpan___ctor(&local_c0,uVar6,uVar7,0,0);
        *plVar10 = local_c0;
        lVar12 = local_c0;
      }
      lVar5 = local_88[0];
      lVar4 = local_90;
      lVar14 = local_98;
      uVar3 = local_a8;
      uVar13 = local_b0;
      uVar8 = local_b8;
      if ((param_4 & 1) == 0) {
        if (*(int *)(DAT_0918bdc0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        System_TimeZoneInfo__TZif_GenerateAdjustmentRules
                  (param_1 + 0x40,lVar12,lVar5,lVar4,lVar14,uVar3,uVar13,uVar8);
        lVar12 = *plVar10;
      }
      uVar13 = *(undefined8 *)(param_1 + 0x10);
      uVar8 = *(undefined8 *)(param_1 + 0x40);
      if (*(int *)(DAT_0918bdc0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      System_TimeZoneInfo__ValidateTimeZoneInfo(uVar13,lVar12,uVar8,param_1 + 0x38);
      return;
    }
    if (*(uint *)(local_98 + 0x18) <= uVar9) {
LAB_0750d858:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c558();
    }
  }
LAB_0750d854:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

