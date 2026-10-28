// rea decompile_all
// name: System.Guid$$TryParseGuidWithNoStyle
// address: 0x75ae9dc
// body: available
// range: 0x75ae9dc-0x75aecb3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 System_Guid__TryParseGuidWithNoStyle(long param_1,undefined8 param_2,long param_3)

{
  ushort uVar1;
  short sVar2;
  ulong uVar3;
  undefined8 *puVar4;
  long lVar5;
  int local_54;
  undefined8 local_50;
  undefined4 local_44;
  undefined8 local_38;
  
  if ((DAT_09521c9e & 1) == 0) {
    FUN_03f5c2a4(&DAT_091b97e8);
    FUN_03f5c2a4(&DAT_091b9810);
    FUN_03f5c2a4(&DAT_09203a20);
    FUN_03f5c2a4(&DAT_09203a28);
    DAT_09521c9e = 1;
  }
  local_44 = 0;
  local_50 = 0;
  local_54 = 0;
  if ((int)param_2 == 0x20) {
    lVar5 = 0;
    do {
      uVar1 = *(ushort *)(param_1 + lVar5);
      if (9 < uVar1 - 0x30) {
        if (*(int *)(DAT_09535460 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        sVar2 = System_Char__ToUpperInvariant((uint)uVar1,0);
        if (5 < (ushort)(sVar2 - 0x41U)) {
          puVar4 = &DAT_09203a28;
          goto LAB_075aec7c;
        }
      }
      lVar5 = lVar5 + 2;
    } while (lVar5 != 0x40);
    if ((*(ushort *)(*(long *)(DAT_091b97e8 + 0x20) + 0x135) & 1) == 0) {
      FUN_03f95a6c();
    }
    local_38 = local_38 & 0xffffffff;
    uVar3 = System_Guid__StringToInt
                      (param_1,8,(long)&local_38 + 4,0xffffffff,0x1000,param_3,param_3);
    if ((uVar3 & 1) == 0) {
      return 0;
    }
    if ((*(ushort *)(*(long *)(DAT_091b97e8 + 0x20) + 0x135) & 1) == 0) {
      FUN_03f95a6c();
    }
    local_38 = 0;
    *(undefined2 *)(param_3 + 4) = 0;
    uVar3 = System_Guid__StringToInt
                      (param_1 + 0x10,4,&local_38,0xffffffff,0x1000,(long)&local_38 + 4,param_3);
    *(short *)(param_3 + 4) = (short)(local_38 >> 0x20);
    if ((uVar3 & 1) == 0) {
      return 0;
    }
    if ((*(ushort *)(*(long *)(DAT_091b97e8 + 0x20) + 0x135) & 1) == 0) {
      FUN_03f95a6c();
    }
    local_38 = 0;
    *(undefined2 *)(param_3 + 6) = 0;
    uVar3 = System_Guid__StringToInt
                      (param_1 + 0x18,4,&local_38,0xffffffff,0x1000,(long)&local_38 + 4,param_3);
    *(short *)(param_3 + 6) = (short)(local_38 >> 0x20);
    if ((uVar3 & 1) == 0) {
      return 0;
    }
    if ((*(ushort *)(*(long *)(DAT_091b97e8 + 0x20) + 0x135) & 1) == 0) {
      FUN_03f95a6c();
    }
    local_38 = local_38 & 0xffffffff;
    uVar3 = System_Guid__StringToInt
                      (param_1 + 0x20,4,(long)&local_38 + 4,0xffffffff,0x1000,&local_44,param_3);
    if ((uVar3 & 1) == 0) {
      return 0;
    }
    local_54 = 0x14;
    uVar3 = System_Guid__StringToLong(param_1,param_2,&local_54,0x2000,&local_50,param_3);
    if ((uVar3 & 1) == 0) {
      return 0;
    }
    if (local_54 == 0x20) {
      *(char *)(param_3 + 0xf) = (char)local_50;
      *(char *)(param_3 + 10) = (char)((ulong)local_50 >> 0x28);
      *(char *)(param_3 + 0xb) = (char)((ulong)local_50 >> 0x20);
      *(char *)(param_3 + 0xc) = (char)((ulong)local_50 >> 0x18);
      *(char *)(param_3 + 0xd) = (char)((ulong)local_50 >> 0x10);
      *(ushort *)(param_3 + 8) = (ushort)local_44 >> 8 | (ushort)local_44 << 8;
      *(char *)(param_3 + 0xe) = (char)((ulong)local_50 >> 8);
      return 1;
    }
  }
  puVar4 = &DAT_09203a20;
LAB_075aec7c:
  System_Guid_GuidResult__SetFailure(param_3,2,*puVar4,0,0,0);
  return 0;
}

