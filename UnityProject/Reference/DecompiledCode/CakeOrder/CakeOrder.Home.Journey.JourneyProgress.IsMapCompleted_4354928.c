// rea decompile_all
// name: CakeOrder.Home.Journey.JourneyProgress$$IsMapCompleted
// address: 0x4354928
// body: available
// range: 0x4354928-0x4354a4b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4354a48 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint CakeOrder_Home_Journey_JourneyProgress__IsMapCompleted(undefined8 param_1)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  int iVar5;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  if ((DAT_095177d3 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091b4a58);
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_095177d3 = 1;
  }
  lVar2 = *(long *)(DAT_091b4a58 + 0x20);
  uStack_38 = 0;
  local_40 = 0;
  uStack_28 = 0;
  uStack_30 = 0;
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_03f95a6c();
  }
  lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x10);
  if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_03f95a6c();
  }
  lVar2 = **(long **)(lVar2 + 0xb8);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424(DAT_09188ad0);
  }
  uVar3 = UnityEngine_Object__op_Equality(lVar2,0,0);
  if ((uVar3 & 1) == 0) {
    lVar4 = CakeOrder_Home_Journey_JourneyLevelMap__get_Instance();
    if (lVar4 == 0) {
LAB_04354a48:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    uVar3 = CakeOrder_Home_Journey_JourneyLevelMap__TryGetRange(lVar4,param_1,&local_40);
    if (((uVar3 & 1) != 0) && (0 < uStack_38._4_4_)) {
      if (lVar2 == 0) goto LAB_04354a48;
      iVar5 = 0;
      do {
        uVar1 = CakeOrder_SaveProfile_PlayerMapLevelProgressDataAccess__IsLevelWin
                          (lVar2,local_40,iVar5,0);
        if ((uVar1 & 1) == 0) break;
        iVar5 = iVar5 + 1;
      } while (iVar5 < uStack_38._4_4_);
      goto LAB_04354a34;
    }
  }
  uVar1 = 0;
LAB_04354a34:
  return uVar1 & 1;
}

