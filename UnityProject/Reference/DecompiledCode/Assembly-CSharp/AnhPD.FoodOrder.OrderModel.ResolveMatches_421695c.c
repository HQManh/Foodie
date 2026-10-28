// rea decompile_all
// name: AnhPD.FoodOrder.OrderModel$$ResolveMatches
// address: 0x421695c
// body: available
// range: 0x421695c-0x4216b4f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4216b4c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long AnhPD_FoodOrder_OrderModel__ResolveMatches(undefined8 param_1,long param_2,undefined8 param_3)

{
  uint uVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  undefined1 auStack_f8 [72];
  undefined8 local_b0;
  undefined8 *puStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 local_50;
  
  if ((DAT_09516cc8 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091a3b60);
    FUN_03f5c2a4(&DAT_091a3b68);
    FUN_03f5c2a4(&DAT_091a3b70);
    FUN_03f5c2a4(&DAT_091adc88);
    FUN_03f5c2a4(&DAT_091aed38);
    FUN_03f5c2a4(&DAT_091adc80);
    FUN_03f5c2a4(&DAT_091aed48);
    FUN_03f5c2a4(&DAT_0917c520);
    DAT_09516cc8 = 1;
  }
  local_50 = 0;
  uStack_68 = 0;
  local_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_88 = 0;
  local_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_98 = 0;
  local_a0 = 0;
  if ((param_2 == 0) || (iVar3 = *(int *)(param_2 + 0x18), iVar3 == 0)) {
LAB_04216b2c:
    lVar4 = 0;
  }
  else {
    lVar4 = thunk_FUN_03f9944c(DAT_0917c520);
    FUN_05796990(lVar4,iVar3,DAT_091adc80);
    FUN_057f00fc(&local_a0,param_2,DAT_091aed38);
    local_b0 = 0;
    puStack_a8 = &local_a0;
    while (uVar5 = FUN_071c1a7c(&local_a0,DAT_091a3b68), (uVar5 & 1) != 0) {
      memcpy(auStack_f8,&local_90,0x48);
      iVar3 = AnhPD_FoodOrder_OrderModel__FindOpenMatch(param_1,auStack_f8,lVar4,param_3);
      lVar2 = DAT_091adc88;
      if (iVar3 < 0) {
        FUN_071c1a78(&local_a0,DAT_091a3b60);
        goto LAB_04216b2c;
      }
      if (lVar4 == 0) {
LAB_04216b4c:
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      lVar6 = *(long *)(lVar4 + 0x10);
      *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
      if (lVar6 == 0) goto LAB_04216b4c;
      uVar1 = *(uint *)(lVar4 + 0x18);
      if (uVar1 < *(uint *)(lVar6 + 0x18)) {
        *(uint *)(lVar4 + 0x18) = uVar1 + 1;
        *(int *)(lVar6 + (long)(int)uVar1 * 4 + 0x20) = iVar3;
      }
      else {
        FUN_057971a8(lVar4,iVar3,*(undefined8 *)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
      }
    }
    FUN_071c1a78(&local_a0,DAT_091a3b60);
  }
  return lVar4;
}

