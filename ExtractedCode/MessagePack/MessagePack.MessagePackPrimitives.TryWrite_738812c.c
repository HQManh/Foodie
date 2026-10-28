// rea decompile_all
// name: MessagePack.MessagePackPrimitives$$TryWrite
// address: 0x738812c
// body: available
// range: 0x738812c-0x73883c7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x73883c4 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
MessagePack_MessagePackPrimitives__TryWrite
          (undefined2 *param_1,int param_2,undefined8 param_3,undefined4 *param_4)

{
  int iVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  uint uVar5;
  ulong uVar6;
  undefined8 local_38;
  
  local_38 = param_3;
  if ((DAT_09520a51 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09183548);
    FUN_03f5c2a4(&DAT_091d34d0);
    FUN_03f5c2a4(&DAT_091ba910);
    FUN_03f5c2a4(&DAT_091ba928);
    DAT_09520a51 = 1;
  }
  if (*(int *)(DAT_09183548 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  iVar1 = System_DateTime__get_Kind(&local_38,0);
  if (iVar1 == 2) {
    if (*(int *)(DAT_09183548 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    local_38 = System_DateTime__ToUniversalTime(&local_38,0);
  }
  if (*(int *)(DAT_09183548 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  lVar2 = System_DateTime__get_Ticks(&local_38,0);
  uVar4 = lVar2 / 10000000 - 0xe7791f700;
  lVar3 = System_DateTime__get_Ticks(&local_38,0);
  if (uVar4 >> 0x22 == 0) {
    uVar6 = (lVar3 % 10000000) * 0x19000000000 | uVar4;
    if (uVar6 >> 0x20 == 0) {
      *param_4 = 6;
      if (5 < param_2) {
        *param_1 = 0xffd6;
        if ((*(ushort *)(*(long *)(DAT_091ba910 + 0x20) + 0x135) & 1) == 0) {
          FUN_03f95a6c();
        }
        if ((param_2 - 2U & 0xfffffffc) != 0) {
          *(char *)((long)param_1 + 5) = (char)(lVar2 / 10000000);
          *(char *)(param_1 + 2) = (char)(uVar4 >> 8);
          *(char *)((long)param_1 + 3) = (char)(uVar4 >> 0x10);
          *(char *)(param_1 + 1) = (char)(uVar4 >> 0x18);
          return 1;
        }
        goto LAB_073883c4;
      }
    }
    else {
      *param_4 = 10;
      if (9 < param_2) {
        *param_1 = 0xffd7;
        if ((*(ushort *)(*(long *)(DAT_091ba910 + 0x20) + 0x135) & 1) == 0) {
          FUN_03f95a6c();
        }
        iVar1 = -2;
        param_1 = param_1 + 1;
        uVar4 = uVar6;
LAB_073883a0:
        MessagePack_MessagePackPrimitives__WriteBigEndian(param_1,param_2 + iVar1,uVar4);
        return 1;
      }
    }
  }
  else {
    *param_4 = 0xf;
    if (0xe < param_2) {
      *param_1 = 0xcc7;
      *(undefined1 *)(param_1 + 1) = 0xff;
      if ((*(ushort *)(*(long *)(DAT_091ba910 + 0x20) + 0x135) & 1) == 0) {
        FUN_03f95a6c();
      }
      if ((param_2 - 3U & 0xfffffffc) != 0) {
        uVar5 = (int)(lVar3 % 10000000) * 100;
        uVar5 = (uVar5 & 0xff00ff00) >> 8 | (uVar5 & 0xff00ff) << 8;
        *(uint *)((long)param_1 + 3) = uVar5 >> 0x10 | uVar5 << 0x10;
        if ((*(ushort *)(*(long *)(DAT_091ba910 + 0x20) + 0x135) & 1) == 0) {
          FUN_03f95a6c();
        }
        iVar1 = -7;
        param_1 = (undefined2 *)((long)param_1 + 7);
        goto LAB_073883a0;
      }
LAB_073883c4:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c558();
    }
  }
  return 0;
}

