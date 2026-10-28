// rea decompile_all
// name: CakeOrder.Home.Journey.JourneyLevelMap$$ReadDeclaredMaps
// address: 0x435284c
// body: available
// range: 0x435284c-0x4352ad7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4352ad0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4352ad4 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long CakeOrder_Home_Journey_JourneyLevelMap__ReadDeclaredMaps(void)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  long lVar10;
  uint uVar11;
  undefined8 local_50;
  undefined8 local_48;
  int local_34;
  
  if ((DAT_095177be & 1) == 0) {
    FUN_03f5c2a4(&DAT_091b3140);
    FUN_03f5c2a4(&DAT_091b3138);
    FUN_03f5c2a4(&DAT_0917d520);
    FUN_03f5c2a4(&DAT_091b4aa8);
    FUN_03f5c2a4(&DAT_091b4ab0);
    FUN_03f5c2a4(&DAT_0921f178);
    DAT_095177be = 1;
  }
  local_34 = 0;
  lVar3 = thunk_FUN_03f9944c(DAT_0917d520);
  FUN_0595344c(lVar3,DAT_091b3138);
  uVar4 = FUN_05a8eda4(DAT_091b4ab0);
  if ((uVar4 & 1) != 0) {
    lVar5 = *(long *)(DAT_091b4aa8 + 0x20);
    if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_03f95a6c();
    }
    lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 0x10);
    if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_03f95a6c();
    }
    if (**(long **)(lVar5 + 0xb8) == 0) {
LAB_04352ad0:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar5 = IapAdsSystem_RemoteConfigManager__GetString(**(long **)(lVar5 + 0xb8),DAT_0921f178,0);
    uVar4 = System_String__IsNullOrEmpty(lVar5,0);
    if ((uVar4 & 1) == 0) {
      if ((lVar5 == 0) || (lVar5 = System_String__Split(lVar5,0x7c,0,0), lVar5 == 0))
      goto LAB_04352ad0;
      uVar1 = *(uint *)(lVar5 + 0x18);
      if (0 < (int)uVar1) {
        uVar11 = 0;
        do {
          if (uVar1 <= uVar11) {
LAB_04352ad4:
                    /* WARNING: Subroutine does not return */
            FUN_03f5c558();
          }
          lVar6 = *(long *)(lVar5 + (long)(int)uVar11 * 8 + 0x20);
          if ((lVar6 == 0) || (lVar6 = System_String__Split(lVar6,0x3b,0,0), lVar6 == 0))
          goto LAB_04352ad0;
          if (1 < *(int *)(lVar6 + 0x18)) {
            if (*(long *)(lVar6 + 0x20) == 0) goto LAB_04352ad0;
            uVar7 = System_String__Trim(*(long *)(lVar6 + 0x20),0);
            uVar4 = System_String__IsNullOrEmpty(uVar7,0);
            if ((uVar4 & 1) == 0) {
              if ((*(uint *)(lVar6 + 0x18) & 0xfffffffe) == 0) goto LAB_04352ad4;
              if (*(long *)(lVar6 + 0x28) == 0) goto LAB_04352ad0;
              uVar8 = System_String__Trim(*(long *)(lVar6 + 0x28),0);
              uVar4 = System_Int32__TryParse(uVar8,&local_34,0);
              iVar2 = local_34;
              if (((uVar4 & 1) != 0) && (0 < local_34)) {
                local_48 = 0;
                local_50 = uVar7;
                thunk_FUN_03f5d7b8(&local_50,uVar7);
                lVar6 = DAT_091b3140;
                local_48 = CONCAT44(local_48._4_4_,iVar2);
                if (lVar3 == 0) goto LAB_04352ad0;
                lVar10 = *(long *)(lVar3 + 0x10);
                *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
                if (lVar10 == 0) goto LAB_04352ad0;
                uVar1 = *(uint *)(lVar3 + 0x18);
                if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                  lVar10 = lVar10 + (long)(int)uVar1 * 0x10;
                  *(uint *)(lVar3 + 0x18) = uVar1 + 1;
                  puVar9 = (undefined8 *)(lVar10 + 0x20);
                  *puVar9 = local_50;
                  *(undefined8 *)(lVar10 + 0x28) = local_48;
                  thunk_FUN_03f5d7b8(puVar9,0);
                }
                else {
                  FUN_05953cf8(lVar3,local_50,local_48,
                               *(undefined8 *)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
                }
              }
            }
          }
          uVar1 = *(uint *)(lVar5 + 0x18);
          uVar11 = uVar11 + 1;
        } while ((int)uVar11 < (int)uVar1);
      }
    }
  }
  return lVar3;
}

