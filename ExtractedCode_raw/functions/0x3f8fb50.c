// rea decompile_all
// name: FUN_03f8fb50
// address: 0x3f8fb50
// body: available
// range: 0x3f8fb50-0x3f8fd13 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x3f8fc14 to 0x3f5d0a4 FUN_03f5d0a4 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_03f8fb50(undefined8 *param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  void *pvVar4;
  undefined8 uVar5;
  int iVar6;
  undefined8 *puVar7;
  undefined *local_88;
  ulong uStack_80;
  void *local_78;
  void *local_70;
  ulong local_68;
  void *local_60;
  byte local_58 [8];
  ulong local_50;
  void *local_48;
  void *local_40;
  ulong uStack_38;
  
  uVar5 = DAT_09534e20;
  uVar1 = (ulong)(DAT_09534e10 >> 1);
  if ((DAT_09534e10 & 1) != 0) {
    uVar1 = DAT_09534e18;
  }
  if (uVar1 == 0) {
    FUN_03f8f214(local_58);
    uVar1 = (ulong)(local_58[0] >> 1);
    if ((local_58[0] & 1) != 0) {
      uVar1 = local_50;
    }
    if (uVar1 == 0) {
      uVar1 = (ulong)_DAT_09534df8 >> 1 & 0x7f;
      if (((ulong)_DAT_09534df8 & 1) != 0) {
        uVar1 = DAT_09534e00;
      }
      if ((uVar1 == 0) && (iVar6 = FUN_03f92378(), 0 < iVar6)) {
        puVar7 = (undefined8 *)FUN_03f9236c();
        FUN_03f92898(&local_70,*puVar7);
        uStack_38 = (ulong)local_70 >> 1 & 0x7f;
        local_40 = (void *)((ulong)&local_70 | 1);
        if (((ulong)local_70 & 1) != 0) {
          uStack_38 = local_68;
          local_40 = local_60;
        }
        FUN_03f8a2e0(&local_88,&local_40);
        if (((ulong)_DAT_09534df8 & 1) != 0) {
          operator_delete(DAT_09534e08);
        }
        DAT_09534e00 = uStack_80;
        _DAT_09534df8 = local_88;
        DAT_09534e08 = local_78;
        if (((ulong)local_70 & 1) != 0) {
          operator_delete(local_60);
        }
      }
      pvVar4 = DAT_09534e08;
      puVar3 = _DAT_09534df8;
      if (((ulong)_DAT_09534df8 & 1) == 0) {
        param_1[1] = DAT_09534e00;
        *param_1 = puVar3;
        param_1[2] = pvVar4;
      }
      else {
        FUN_03f5d0a4(param_1,DAT_09534e08,DAT_09534e00);
      }
    }
    else {
      local_70 = (void *)((ulong)local_58 | 1);
      if ((local_58[0] & 1) != 0) {
        local_70 = local_48;
      }
      local_88 = &DAT_01a367f8;
      uStack_80 = 4;
      local_68 = uVar1;
      FUN_03f67944(param_1,&local_70,&local_88);
    }
    if ((local_58[0] & 1) != 0) {
      operator_delete(local_48);
    }
  }
  else {
    if ((DAT_09534e10 & 1) != 0) {
      FUN_03f5d0a4(param_1,DAT_09534e20);
      return;
    }
    uVar2 = CONCAT71(uRam0000000009534e11,DAT_09534e10);
    param_1[1] = DAT_09534e18;
    *param_1 = uVar2;
    param_1[2] = uVar5;
  }
  return;
}

