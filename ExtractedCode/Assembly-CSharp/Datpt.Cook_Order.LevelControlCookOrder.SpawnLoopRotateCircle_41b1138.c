// rea decompile_all
// name: Datpt.Cook_Order.LevelControlCookOrder$$SpawnLoopRotateCircle
// address: 0x41b1138
// body: available
// range: 0x41b1138-0x41b12a7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x41b12a4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
Datpt_Cook_Order_LevelControlCookOrder__SpawnLoopRotateCircle
          (undefined4 param_1,undefined4 param_2,undefined4 param_3,long param_4,undefined8 param_5)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined8 *puVar7;
  
  if ((DAT_095168f9 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091ae4b8);
    FUN_03f5c2a4(&DAT_091ae4c0);
    FUN_03f5c2a4(&DAT_091b4cb8);
    DAT_095168f9 = 1;
  }
  lVar2 = *(long *)(DAT_091b4cb8 + 0x20);
  if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_03f95a6c();
  }
  lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x10);
  if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_03f95a6c();
  }
  if (**(long **)(lVar2 + 0xb8) != 0) {
    uVar3 = Datpt_Cook_Order_Pooler__SpawnLoopRotateCircle
                      (param_1,param_2,param_3,**(long **)(lVar2 + 0xb8),param_5,0);
    if (*(long *)(param_4 + 0x158) != 0) {
      uVar4 = FUN_057e1004(*(long *)(param_4 + 0x158),uVar3,DAT_091ae4c0);
      lVar2 = DAT_091ae4b8;
      if ((uVar4 & 1) != 0) {
        return uVar3;
      }
      lVar5 = *(long *)(param_4 + 0x158);
      if (lVar5 != 0) {
        lVar6 = *(long *)(lVar5 + 0x10);
        *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
        if (lVar6 != 0) {
          uVar1 = *(uint *)(lVar5 + 0x18);
          if (uVar1 < *(uint *)(lVar6 + 0x18)) {
            *(uint *)(lVar5 + 0x18) = uVar1 + 1;
            puVar7 = (undefined8 *)(lVar6 + (long)(int)uVar1 * 8 + 0x20);
            *puVar7 = uVar3;
            thunk_FUN_03f5d7b8(puVar7,uVar3);
            return uVar3;
          }
          FUN_057e0c68(lVar5,uVar3,*(undefined8 *)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70)
                      );
          return uVar3;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

