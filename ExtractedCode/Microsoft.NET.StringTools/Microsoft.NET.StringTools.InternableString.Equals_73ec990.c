// rea decompile_all
// name: Microsoft.NET.StringTools.InternableString$$Equals
// address: 0x73ec990
// body: available
// range: 0x73ec990-0x73ecbf3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x73ecbf0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint Microsoft_NET_StringTools_InternableString__Equals(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined8 uVar6;
  long lVar7;
  uint uVar8;
  undefined1 auVar9 [16];
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  if ((DAT_09520df3 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091a1ea0);
    FUN_03f5c2a4(&DAT_091a1ea8);
    FUN_03f5c2a4(&DAT_091a1eb0);
    FUN_03f5c2a4(&DAT_091aa8d8);
    FUN_03f5c2a4(&DAT_091d2f60);
    FUN_03f5c2a4(&DAT_091b9688);
    FUN_03f5c2a4(&DAT_091b9690);
    FUN_03f5c2a4(&DAT_091b9810);
    DAT_09520df3 = 1;
  }
  local_90 = 0;
  uStack_88 = 0;
  uStack_78 = 0;
  local_80 = 0;
  uStack_68 = 0;
  local_70 = 0;
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  uVar4 = *(uint *)(param_2 + 0x10);
  if (uVar4 == *(uint *)(param_1 + 4)) {
    uVar1 = *param_1;
    uVar2 = param_1[1];
    if (DAT_09520e02 == '\0') {
      FUN_03f5c2a4(&DAT_091b97b8);
      uVar4 = *(uint *)(param_2 + 0x10);
      DAT_09520e02 = '\x01';
    }
    if (uVar4 < (uint)uVar2) {
      System_ThrowHelper__ThrowArgumentOutOfRangeException(0x18,0);
    }
    uVar6 = System_String__GetRawStringData(param_2,0);
    iVar3 = FUN_073ee7fc(uVar1,uVar2,uVar6,uVar2 & 0xffffffff,DAT_091d2f60);
    if (iVar3 == 0) {
      uVar4 = 1;
      if (param_1[3] != 0) {
        uVar8 = *(uint *)(param_1 + 1);
        FUN_05699124(&local_80,param_1[3],DAT_091aa8d8);
        while( true ) {
          uVar4 = FUN_0718425c(&local_80,DAT_091a1ea8);
          if ((uVar4 & 1) == 0) break;
          uStack_88 = uStack_68;
          local_90 = local_70;
          auVar9 = FUN_04a6d894(&local_90,DAT_091b9690);
          uVar5 = FUN_05fd73e4(&local_90,DAT_091b9688);
          if (DAT_09520e02 == '\0') {
            FUN_03f5c2a4(&DAT_091b97b8);
            DAT_09520e02 = '\x01';
          }
          if ((*(uint *)(param_2 + 0x10) < uVar8) || (*(uint *)(param_2 + 0x10) - uVar8 < uVar5)) {
            System_ThrowHelper__ThrowArgumentOutOfRangeException(0x18,0);
          }
          lVar7 = System_String__GetRawStringData(param_2,0);
          iVar3 = FUN_073ee7fc(auVar9._0_8_,auVar9._8_8_,lVar7 + (long)(int)uVar8 * 2,uVar5,
                               DAT_091d2f60);
          if (iVar3 != 0) break;
          iVar3 = FUN_05fd73e4(&local_90,DAT_091b9688);
          uVar8 = iVar3 + uVar8;
        }
        uVar4 = uVar4 ^ 1;
        FUN_07184258(&local_80,DAT_091a1ea0);
      }
      goto LAB_073ecab8;
    }
  }
  uVar4 = 0;
LAB_073ecab8:
  return uVar4 & 1;
}

