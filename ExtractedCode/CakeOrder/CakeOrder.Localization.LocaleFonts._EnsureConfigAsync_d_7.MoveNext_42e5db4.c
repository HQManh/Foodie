// rea decompile_all
// name: CakeOrder.Localization.LocaleFonts.<EnsureConfigAsync>d__7$$MoveNext
// address: 0x42e5db4
// body: available
// range: 0x42e5db4-0x42e61cb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_Localization_LocaleFonts_<EnsureConfigAsync>d__7__MoveNext(int *param_1)

{
  char cVar1;
  ulong uVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  long *plVar9;
  long *local_c0;
  undefined8 uStack_b8;
  ulong local_b0;
  undefined4 local_98;
  long *local_90;
  undefined8 uStack_88;
  ulong local_80;
  long *local_70;
  undefined8 uStack_68;
  ulong local_60;
  long *local_50;
  undefined8 uStack_48;
  ulong local_40;
  
  if ((DAT_09517454 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09180e78);
    FUN_03f5c2a4(&DAT_091bf6f0);
    FUN_03f5c2a4(&DAT_091bf640);
    FUN_03f5c2a4(&DAT_09180f88);
    FUN_03f5c2a4(&DAT_091814b0);
    FUN_03f5c2a4(&DAT_091c1e38);
    FUN_03f5c2a4(&DAT_0919a630);
    FUN_03f5c2a4(&DAT_0919a638);
    FUN_03f5c2a4(&DAT_091d26b8);
    FUN_03f5c2a4(&DAT_09187b38);
    FUN_03f5c2a4(&DAT_091bde78);
    FUN_03f5c2a4(&DAT_09207070);
    DAT_09517454 = 1;
  }
  local_70 = (long *)0x0;
  uStack_68 = 0;
  local_60 = 0;
  local_90 = (long *)0x0;
  uStack_88 = 0;
  local_80 = 0;
  local_98 = 0;
  if (*param_1 == 0) {
    local_60 = *(ulong *)(param_1 + 10);
    uStack_68 = *(undefined8 *)(param_1 + 8);
    local_70 = *(long **)(param_1 + 6);
    param_1[8] = 0;
    param_1[9] = 0;
    param_1[10] = 0;
    param_1[0xb] = 0;
    param_1[6] = 0;
    param_1[7] = 0;
    *param_1 = -1;
  }
  else {
    if (*(char *)(*(long *)(DAT_09187b38 + 0xb8) + 8) != '\0') goto LAB_042e6124;
    *(undefined1 *)(*(long *)(DAT_09187b38 + 0xb8) + 8) = 1;
    if (*(int *)(DAT_09180f88 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    FUN_04b711d8(&local_c0,DAT_09207070,DAT_091bf640);
    uStack_48 = uStack_b8;
    local_50 = local_c0;
    local_40 = local_b0;
    FUN_04b722fc(&local_c0,&local_50,0,8,0,0,0,DAT_091bf6f0);
    uStack_48 = 0;
    local_40 = 0;
    uStack_88 = uStack_b8;
    local_90 = local_c0;
    local_80 = local_b0;
    local_50 = (long *)0x0;
    if ((*(byte *)(*(long *)(DAT_091bde78 + 0x20) + 0x135) & 1) == 0) {
      FUN_03f95a6c();
    }
    uStack_48 = uStack_88;
    local_50 = local_90;
    local_40 = local_80;
    thunk_FUN_03f5d7b8(&local_50,0);
    uStack_68 = uStack_48;
    local_70 = local_50;
    local_60 = local_40;
    uVar2 = FUN_041e5390(&local_70,DAT_0919a638);
    if ((uVar2 & 1) == 0) {
      *param_1 = 0;
      *(undefined8 *)(param_1 + 8) = uStack_68;
      *(long **)(param_1 + 6) = local_70;
      *(ulong *)(param_1 + 10) = local_60;
      thunk_FUN_03f5d7b8(param_1 + 6,0);
      FUN_042f4ec0(param_1 + 2,&local_70,param_1,DAT_091c1e38);
      return;
    }
  }
  plVar9 = local_70;
  uVar5 = uStack_68;
  if (local_70 != (long *)0x0) {
    uVar2 = local_60 & 0xffff;
    lVar3 = *(long *)(DAT_0919a630 + 0x20);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_03f95a6c();
    }
    lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x28);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_03f95a6c(lVar3);
    }
    lVar6 = *plVar9;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == lVar3) {
          puVar4 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_042e6090;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar4 = (undefined8 *)FUN_03f95da8(plVar9,lVar3,0);
LAB_042e6090:
    uVar5 = (*(code *)*puVar4)(plVar9,uVar2,puVar4[1]);
  }
  **(undefined8 **)(DAT_09187b38 + 0xb8) = uVar5;
  thunk_FUN_03f5d7b8(*(undefined8 *)(DAT_09187b38 + 0xb8));
  if (*(char *)(*(long *)(DAT_09187b38 + 0xb8) + 0x30) == '\0') {
    *(undefined1 *)(*(long *)(DAT_09187b38 + 0xb8) + 0x30) = 1;
    uVar5 = thunk_FUN_03f9944c(DAT_09180e78);
    System_Action___ctor(uVar5,0,DAT_091d26b8,0);
    if (*(int *)(DAT_091814b0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    UnityEngine_Application__add_quitting(uVar5,0);
  }
LAB_042e6124:
  cVar1 = DAT_095162d8;
  *param_1 = -2;
  if (cVar1 == '\0') {
    FUN_03f5c2a4(&DAT_091866a8);
    DAT_095162d8 = '\x01';
  }
  plVar9 = *(long **)(param_1 + 2);
  if (plVar9 != (long *)0x0) {
    lVar3 = *plVar9;
    uVar2 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar2 != 0) {
      piVar8 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == DAT_091866a8) {
          puVar4 = (undefined8 *)(lVar3 + (long)(*piVar8 + 2) * 0x10 + 0x138);
          goto LAB_042e61ac;
        }
        uVar2 = uVar2 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar2 != 0);
    }
    puVar4 = (undefined8 *)FUN_03f95da8(plVar9,DAT_091866a8,2);
LAB_042e61ac:
    (*(code *)*puVar4)(plVar9,puVar4[1]);
  }
  return;
}

