// rea decompile_all
// name: Coffee.UIEffects.TmpProxy.<>c$$<InitializeOnLoad>b__13_2
// address: 0x43f9d90
// body: available
// range: 0x43f9d90-0x43f9fa7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x43f9f9c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x43f9fa0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x43f9fa4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Coffee_UIEffects_TmpProxy_<>c__<InitializeOnLoad>b__13_2(void)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  undefined8 local_88;
  undefined8 *puStack_80;
  long local_78;
  undefined8 local_70;
  undefined8 *puStack_68;
  long local_60;
  undefined8 local_48;
  
  if ((DAT_09517e27 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c5918);
    FUN_03f5c2a4(&DAT_091a4838);
    FUN_03f5c2a4(&DAT_091a4840);
    FUN_03f5c2a4(&DAT_091a4848);
    FUN_03f5c2a4(&DAT_091a87c0);
    FUN_03f5c2a4(&DAT_091a87c8);
    FUN_03f5c2a4(&DAT_091a87d0);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_0918be78);
    DAT_09517e27 = 1;
  }
  local_70 = 0;
  puStack_68 = (undefined8 *)0x0;
  local_60 = 0;
  local_48 = 0;
  if (*(int *)(DAT_0918be78 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  lVar1 = *(long *)(*(long *)(DAT_0918be78 + 0xb8) + 0x28);
  if (lVar1 != 0) {
    FUN_053ec0b0(&local_88,lVar1,DAT_091a87d0);
    local_60 = local_78;
    puStack_68 = puStack_80;
    local_70 = local_88;
    local_88 = 0;
    puStack_80 = &local_70;
    while (uVar2 = FUN_071bb7b4(&local_70,DAT_091a4840), lVar1 = local_60, (uVar2 & 1) != 0) {
      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar2 = UnityEngine_Object__op_Implicit(lVar1,0);
      if ((uVar2 & 1) != 0) {
        if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        uVar2 = UnityEngine_Behaviour__get_isActiveAndEnabled(lVar1,0);
        if (((uVar2 & 1) != 0) &&
           (uVar2 = FUN_04a6b048(lVar1,&local_48,DAT_091c5918), (uVar2 & 1) != 0)) {
          if (*(int *)(DAT_0918be78 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          lVar3 = *(long *)(*(long *)(DAT_0918be78 + 0xb8) + 0x30);
          if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          FUN_053ec72c(lVar3,lVar1,DAT_091a87c0);
          Coffee_UIEffects_TmpProxy__ModifyMesh(lVar1);
        }
      }
    }
    FUN_071bb7b0(&local_70,DAT_091a4838);
    if (*(int *)(DAT_0918be78 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    lVar1 = *(long *)(*(long *)(DAT_0918be78 + 0xb8) + 0x28);
    if (lVar1 != 0) {
      FUN_053ebbdc(lVar1,DAT_091a87c8);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

