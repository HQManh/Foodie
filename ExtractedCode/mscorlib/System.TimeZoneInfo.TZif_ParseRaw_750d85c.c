// rea decompile_all
// name: System.TimeZoneInfo$$TZif_ParseRaw
// address: 0x750d85c
// body: available
// range: 0x750d85c-0x750de13 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x750dde8 to 0x3f5c248 thunk_FUN_03f5d7b8 (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x750de0c to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x750de10 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_TimeZoneInfo__TZif_ParseRaw
               (long param_1,undefined8 *param_2,long *param_3,long *param_4,long *param_5,
               undefined8 *param_6,long *param_7,long *param_8,undefined8 *param_9)

{
  char *pcVar1;
  uint uVar2;
  undefined1 uVar3;
  long lVar4;
  undefined8 uVar5;
  long *plVar6;
  uint uVar7;
  uint uVar8;
  long lVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  long lVar13;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  if ((DAT_095216f2 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0917fc40);
    FUN_03f5c2a4(&DAT_0917fc88);
    FUN_03f5c2a4(&DAT_0917fe20);
    FUN_03f5c2a4(&DAT_09180c28);
    FUN_03f5c2a4(&DAT_0918bdc0);
    DAT_095216f2 = 1;
  }
  *param_3 = 0;
  thunk_FUN_03f5d7b8(param_3,0);
  *param_4 = 0;
  thunk_FUN_03f5d7b8(param_4,0);
  *param_5 = 0;
  thunk_FUN_03f5d7b8(param_5,0);
  *param_6 = **(undefined8 **)(DAT_09535468 + 0xb8);
  thunk_FUN_03f5d7b8();
  *param_7 = 0;
  thunk_FUN_03f5d7b8(param_7,0);
  *param_8 = 0;
  thunk_FUN_03f5d7b8(param_8,0);
  *param_9 = 0;
  thunk_FUN_03f5d7b8(param_9,0);
  uStack_78 = 0;
  local_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  System_TimeZoneInfo_TZifHead___ctor(&local_80,param_1,0);
  param_2[1] = uStack_78;
  *param_2 = local_80;
  param_2[3] = uStack_68;
  param_2[2] = uStack_70;
  if (*(char *)((long)param_2 + 4) == '\0') {
    iVar12 = 0x2c;
    iVar10 = 4;
  }
  else {
    uStack_78 = 0;
    local_80 = 0;
    uStack_68 = 0;
    uStack_70 = 0;
    iVar12 = *(int *)((long)param_2 + 0x14) * 5 + *(int *)(param_2 + 3) * 6 +
             *(int *)(param_2 + 2) * 8 +
             *(int *)((long)param_2 + 0xc) + *(int *)(param_2 + 1) + *(int *)((long)param_2 + 0x1c);
    System_TimeZoneInfo_TZifHead___ctor(&local_80,param_1,iVar12 + 0x2c);
    iVar12 = iVar12 + 0x58;
    iVar10 = 8;
    param_2[1] = uStack_78;
    *param_2 = local_80;
    param_2[3] = uStack_68;
    param_2[2] = uStack_70;
  }
  lVar4 = FUN_03f5c394(DAT_0917fe20,*(undefined4 *)((long)param_2 + 0x14));
  *param_3 = lVar4;
  thunk_FUN_03f5d7b8(param_3,lVar4);
  lVar4 = FUN_03f5c394(DAT_0917fc88,*(undefined4 *)((long)param_2 + 0x14));
  *param_4 = lVar4;
  thunk_FUN_03f5d7b8(param_4,lVar4);
  lVar4 = FUN_03f5c394(DAT_09180c28,*(undefined4 *)(param_2 + 3));
  *param_5 = lVar4;
  thunk_FUN_03f5d7b8(param_5,lVar4);
  *param_6 = **(undefined8 **)(DAT_09535468 + 0xb8);
  thunk_FUN_03f5d7b8();
  lVar4 = FUN_03f5c394(DAT_0917fc40,*(undefined4 *)(param_2 + 3));
  *param_7 = lVar4;
  thunk_FUN_03f5d7b8(param_7,lVar4);
  lVar4 = FUN_03f5c394(DAT_0917fc40,*(undefined4 *)(param_2 + 3));
  *param_8 = lVar4;
  thunk_FUN_03f5d7b8(param_8,lVar4);
  if (*(int *)((long)param_2 + 0x14) != 0) {
    lVar4 = 0;
    uVar11 = 0;
    do {
      uVar3 = *(undefined1 *)((long)param_2 + 4);
      if (*(int *)(DAT_0918bdc0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      System_TimeZoneInfo__TZif_ToUnixTime(param_1,iVar12,uVar3);
      lVar13 = *param_3;
      uVar5 = System_TimeZoneInfo__TZif_UnixTimeToDateTime();
      if (lVar13 == 0) goto LAB_0750de10;
      if (*(uint *)(lVar13 + 0x18) <= uVar11) goto LAB_0750de0c;
      lVar9 = lVar4 * 8;
      uVar11 = uVar11 + 1;
      iVar12 = iVar12 + iVar10;
      lVar4 = (long)(int)uVar11;
      *(undefined8 *)(lVar13 + lVar9 + 0x20) = uVar5;
    } while (lVar4 < (long)(ulong)*(uint *)((long)param_2 + 0x14));
    if (*(uint *)((long)param_2 + 0x14) != 0) {
      if (param_1 == 0) goto LAB_0750de10;
      lVar4 = 0;
      uVar11 = 0;
      do {
        uVar7 = iVar12 + uVar11;
        if (*(uint *)(param_1 + 0x18) <= uVar7) goto LAB_0750de0c;
        lVar13 = *param_4;
        if (lVar13 == 0) goto LAB_0750de10;
        if (*(uint *)(lVar13 + 0x18) <= uVar11) goto LAB_0750de0c;
        uVar11 = uVar11 + 1;
        *(undefined1 *)(lVar13 + lVar4 + 0x20) = *(undefined1 *)(param_1 + (int)uVar7 + 0x20);
        lVar4 = (long)(int)uVar11;
      } while (lVar4 < (long)(ulong)*(uint *)((long)param_2 + 0x14));
      iVar12 = iVar12 + uVar11;
    }
  }
  if (*(int *)(param_2 + 3) != 0) {
    lVar4 = 0;
    uVar11 = 0;
    do {
      lVar13 = *param_5;
      local_80 = 0;
      uStack_78 = 0;
      System_TimeZoneInfo_TZifType___ctor(&local_80,param_1,iVar12);
      if (lVar13 == 0) goto LAB_0750de10;
      if (*(uint *)(lVar13 + 0x18) <= uVar11) goto LAB_0750de0c;
      lVar13 = lVar13 + lVar4 * 0x10;
      uVar11 = uVar11 + 1;
      lVar4 = (long)(int)uVar11;
      iVar12 = iVar12 + 6;
      *(undefined8 *)(lVar13 + 0x28) = uStack_78;
      *(undefined8 *)(lVar13 + 0x20) = local_80;
    } while (lVar4 < (long)(ulong)*(uint *)(param_2 + 3));
  }
  plVar6 = (long *)System_Text_Encoding__get_UTF8(0);
  if (plVar6 == (long *)0x0) {
LAB_0750de10:
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  uVar5 = (**(code **)(*plVar6 + 0x378))
                    (plVar6,param_1,iVar12,*(undefined4 *)((long)param_2 + 0x1c),
                     *(undefined8 *)(*plVar6 + 0x380));
  *param_6 = uVar5;
  thunk_FUN_03f5d7b8();
  uVar7 = *(uint *)((long)param_2 + 0xc);
  uVar11 = *(int *)((long)param_2 + 0x1c) + iVar12 + *(int *)(param_2 + 2) * (iVar10 + 4);
  if (uVar7 != 0) {
    uVar2 = *(uint *)(param_2 + 3);
    lVar4 = 0;
    lVar13 = 0;
    do {
      if ((long)(ulong)uVar2 <= lVar13) break;
      if (param_1 == 0) goto LAB_0750de10;
      uVar8 = (uint)*(undefined8 *)(param_1 + 0x18);
      if ((long)(int)uVar8 <= (int)uVar11 + lVar4) break;
      if (uVar8 <= uVar11 + (uint)lVar4) goto LAB_0750de0c;
      lVar9 = *param_7;
      if (lVar9 == 0) goto LAB_0750de10;
      if (*(uint *)(lVar9 + 0x18) <= (uint)lVar4) goto LAB_0750de0c;
      pcVar1 = (char *)(param_1 + (int)uVar11 + 0x20 + lVar4);
      lVar4 = lVar4 + 1;
      lVar9 = lVar9 + lVar13;
      lVar13 = (long)(int)lVar4;
      *(bool *)(lVar9 + 0x20) = *pcVar1 != '\0';
    } while (lVar13 < (long)(ulong)uVar7);
    uVar11 = uVar11 + (int)lVar4;
  }
  uVar7 = *(uint *)(param_2 + 1);
  if (uVar7 != 0) {
    uVar2 = *(uint *)(param_2 + 3);
    lVar4 = 0;
    lVar13 = 0;
    do {
      if ((long)(ulong)uVar2 <= lVar13) break;
      if (param_1 == 0) goto LAB_0750de10;
      uVar8 = (uint)*(undefined8 *)(param_1 + 0x18);
      if ((long)(int)uVar8 <= (int)uVar11 + lVar4) break;
      if (uVar8 <= uVar11 + (uint)lVar4) goto LAB_0750de0c;
      lVar9 = *param_8;
      if (lVar9 == 0) goto LAB_0750de10;
      if (*(uint *)(lVar9 + 0x18) <= (uint)lVar4) goto LAB_0750de0c;
      pcVar1 = (char *)(param_1 + (int)uVar11 + 0x20 + lVar4);
      lVar4 = lVar4 + 1;
      lVar9 = lVar9 + lVar13;
      lVar13 = (long)(int)lVar4;
      *(bool *)(lVar9 + 0x20) = *pcVar1 != '\0';
    } while (lVar13 < (long)(ulong)uVar7);
    uVar11 = uVar11 + (int)lVar4;
  }
  if (*(char *)((long)param_2 + 4) != '\0') {
    if (param_1 == 0) goto LAB_0750de10;
    uVar7 = (uint)*(undefined8 *)(param_1 + 0x18);
    if (uVar7 < uVar11 || uVar7 - uVar11 == 0) {
LAB_0750de0c:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c558();
    }
    if ((*(char *)(param_1 + (int)uVar11 + 0x20) == '\n') &&
       (*(char *)(param_1 + (int)(uVar7 - 1) + 0x20) == '\n')) {
      uVar5 = (**(code **)(*plVar6 + 0x378))
                        (plVar6,param_1,uVar11 + 1,(uVar7 - uVar11) + -2,
                         *(undefined8 *)(*plVar6 + 0x380));
      *param_9 = uVar5;
      thunk_FUN_03f5d7b8(param_9);
      return;
    }
  }
  return;
}

