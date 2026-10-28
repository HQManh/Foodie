// rea decompile_all
// name: Coffee.UIExtensions.UIParticle$$SetParticleSystemInstance
// address: 0x43ffc10
// body: available
// range: 0x43ffc10-0x43ffe27 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x43ffe24 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Coffee_UIExtensions_UIParticle__SetParticleSystemInstance
               (long param_1,long param_2,ulong param_3)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined8 uVar7;
  undefined8 local_70;
  undefined8 local_68;
  
  if ((DAT_09517e73 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091cdc10);
    FUN_03f5c2a4(&DAT_091cdc80);
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_09517e73 = 1;
  }
  local_70 = 0;
  local_68 = 0;
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar2 = UnityEngine_Object__op_Implicit(param_2,0);
  if ((uVar2 & 1) == 0) {
    return;
  }
  lVar3 = UnityEngine_Component__get_transform(param_1,0);
  if (lVar3 != 0) {
    iVar1 = UnityEngine_Transform__get_childCount(lVar3,0);
    if (0 < iVar1) {
      iVar6 = 0;
      do {
        lVar3 = UnityEngine_Component__get_transform(param_1,0);
        if (((lVar3 == 0) || (lVar3 = UnityEngine_Transform__GetChild(lVar3,iVar6,0), lVar3 == 0))
           || (lVar3 = UnityEngine_Component__get_gameObject(lVar3,0), lVar3 == 0))
        goto LAB_043ffe24;
        uVar2 = FUN_04b7d49c(lVar3,&local_68,DAT_091cdc10);
        uVar4 = local_68;
        if ((uVar2 & 1) == 0) {
LAB_043ffd40:
          uVar2 = FUN_04b7d49c(lVar3,&local_70,DAT_091cdc80);
          if (((uVar2 & 1) == 0) &&
             (UnityEngine_GameObject__SetActive(lVar3,0,0), (param_3 & 1) != 0)) {
            Coffee_UIParticleInternal_Misc__Destroy(lVar3);
          }
        }
        else {
          uVar7 = *(undefined8 *)(param_1 + 0x128);
          if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uVar2 = UnityEngine_Object__op_Equality(uVar4,uVar7,0);
          if ((uVar2 & 1) == 0) goto LAB_043ffd40;
        }
        iVar6 = iVar6 + 1;
      } while (iVar1 != iVar6);
    }
    if (param_2 != 0) {
      lVar3 = UnityEngine_GameObject__get_transform(param_2,0);
      uVar4 = UnityEngine_Component__get_transform(param_1,0);
      if (lVar3 != 0) {
        UnityEngine_Transform__SetParent(lVar3,uVar4,0,0);
        if (DAT_09515ce6 == '\0') {
          FUN_03f5c2a4(&DAT_0918cbd0);
          DAT_09515ce6 = '\x01';
        }
        puVar5 = *(undefined4 **)(DAT_0918cbd0 + 0xb8);
        UnityEngine_Transform__set_localPosition(*puVar5,puVar5[1],puVar5[2],lVar3,0);
        Coffee_UIExtensions_UIParticle__RefreshParticles(param_1,param_2);
        return;
      }
    }
  }
LAB_043ffe24:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

