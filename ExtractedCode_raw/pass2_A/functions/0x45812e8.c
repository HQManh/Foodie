// rea decompile_all
// name: EssentialSystemR1.OnlineTimeCheck$$SetDatePart
// address: 0x45812e8
// body: available
// range: 0x45812e8-0x4581527 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void EssentialSystemR1_OnlineTimeCheck__SetDatePart(long param_1,int param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  undefined4 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 local_58;
  
  if ((DAT_09518923 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09183548);
    FUN_03f5c2a4(&DAT_09188c20);
    DAT_09518923 = 1;
  }
  if (*(int *)(DAT_09183548 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar3 = System_DateTime__get_Year(param_1 + 0x58,0);
  uVar4 = System_DateTime__get_Month(param_1 + 0x58,0);
  uVar5 = System_DateTime__get_Day(param_1 + 0x58,0);
  uVar6 = System_DateTime__get_Hour(param_1 + 0x58,0);
  uVar7 = System_DateTime__get_Minute(param_1 + 0x58,0);
  uVar8 = System_DateTime__get_Second(param_1 + 0x58,0);
  if (param_2 < 3) {
    if (param_2 == 0) {
      if (0x270e < (int)param_3) {
        param_3 = 9999;
      }
      uVar3 = param_3;
      if ((int)param_3 < 2) {
        uVar3 = 1;
      }
    }
    else if (param_2 == 1) {
      if (0xb < (int)param_3) {
        param_3 = 0xc;
      }
      uVar4 = param_3;
      if ((int)param_3 < 2) {
        uVar4 = 1;
      }
    }
    else if (param_2 == 2) {
      uVar5 = param_3;
    }
  }
  else if (param_2 == 3) {
    if (0x16 < (int)param_3) {
      param_3 = 0x17;
    }
    uVar6 = param_3 & ((int)param_3 >> 0x1f ^ 0xffffffffU);
  }
  else if (param_2 == 4) {
    if (0x3a < (int)param_3) {
      param_3 = 0x3b;
    }
    uVar7 = param_3 & ((int)param_3 >> 0x1f ^ 0xffffffffU);
  }
  else if (param_2 == 5) {
    if (0x3a < (int)param_3) {
      param_3 = 0x3b;
    }
    uVar8 = param_3 & ((int)param_3 >> 0x1f ^ 0xffffffffU);
  }
  if (*(int *)(DAT_09183548 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar9 = System_DateTime__DaysInMonth(uVar3,uVar4,0);
  uVar1 = uVar5;
  if ((int)uVar9 <= (int)uVar5) {
    uVar1 = uVar9;
  }
  uVar9 = uVar1;
  if ((int)uVar5 < 1) {
    uVar9 = 1;
  }
  uVar10 = System_DateTime__get_Kind(uVar1,param_1 + 0x58,0);
  local_58 = 0;
  System_DateTime___ctor(&local_58,uVar3,uVar4,uVar9,uVar6,uVar7,uVar8,uVar10,0);
  uVar12 = local_58;
  iVar2 = *(int *)(DAT_09188c20 + 0xe4);
  *(undefined8 *)(param_1 + 0x58) = local_58;
  if (iVar2 == 0) {
    FUN_03f5c424();
  }
  uVar11 = EssentialSystemR1_OnlineTimeCheck__get_BaseNow();
  uVar12 = System_DateTime__op_Subtraction(uVar12,uVar11,0);
  *(undefined8 *)(param_1 + 0x50) = uVar12;
  EssentialSystemR1_OnlineTimeCheck__SyncDatePartText(param_1);
  EssentialSystemR1_OnlineTimeCheck__SyncDaySlider(param_1);
  return;
}

