// rea decompile_all
// name: AssetKits.ParticleImage.ParticleImage$$get_particleTrailRenderer
// address: 0x7729798
// body: available
// range: 0x7729798-0x7729a33 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7729a30 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 AssetKits_ParticleImage_ParticleImage__get_particleTrailRenderer(long param_1)

{
  undefined8 *puVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  undefined4 *puVar5;
  long lVar6;
  undefined8 uVar7;
  
  if ((DAT_09522a36 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c55b0);
    FUN_03f5c2a4(&DAT_091cd610);
    FUN_03f5c2a4(&DAT_091cd720);
    FUN_03f5c2a4(&DAT_09184b68);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_09210d58);
    DAT_09522a36 = 1;
  }
  if (*(char *)(param_1 + 0x728) == '\0') {
    uVar7 = 0;
  }
  else {
    uVar7 = *(undefined8 *)(param_1 + 0x720);
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    puVar1 = (undefined8 *)(param_1 + 0x720);
    uVar2 = UnityEngine_Object__op_Implicit(uVar7,0);
    if ((uVar2 & 1) == 0) {
      uVar7 = FUN_04a6a328(param_1,DAT_091c55b0);
      *(undefined8 *)(param_1 + 0x720) = uVar7;
      thunk_FUN_03f5d7b8(puVar1,uVar7);
      uVar7 = *(undefined8 *)(param_1 + 0x720);
      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar2 = UnityEngine_Object__op_Implicit(uVar7,0);
      if ((uVar2 & 1) == 0) {
        lVar3 = thunk_FUN_03f9944c(DAT_09184b68);
        UnityEngine_GameObject___ctor(lVar3,DAT_09210d58,0);
        if (lVar3 == 0) {
LAB_07729a30:
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        lVar4 = UnityEngine_GameObject__get_transform(lVar3,0);
        uVar7 = UnityEngine_Component__get_transform(param_1,0);
        if (lVar4 == 0) goto LAB_07729a30;
        UnityEngine_Transform__set_parent(lVar4,uVar7,0);
        lVar4 = UnityEngine_GameObject__get_transform(lVar3,0);
        if (DAT_09515ce6 == '\0') {
          FUN_03f5c2a4(&DAT_0918cbd0);
          DAT_09515ce6 = '\x01';
        }
        if (lVar4 == 0) goto LAB_07729a30;
        puVar5 = *(undefined4 **)(DAT_0918cbd0 + 0xb8);
        UnityEngine_Transform__set_localPosition(*puVar5,puVar5[1],puVar5[2],lVar4,0);
        lVar4 = UnityEngine_GameObject__get_transform(lVar3,0);
        if (DAT_09515cf3 == '\0') {
          FUN_03f5c2a4(&DAT_0918cbd0);
          DAT_09515cf3 = '\x01';
        }
        if (lVar4 == 0) goto LAB_07729a30;
        lVar6 = *(long *)(DAT_0918cbd0 + 0xb8);
        UnityEngine_Transform__set_localScale
                  (*(undefined4 *)(lVar6 + 0xc),*(undefined4 *)(lVar6 + 0x10),
                   *(undefined4 *)(lVar6 + 0x14),lVar4,0);
        lVar4 = UnityEngine_GameObject__get_transform(lVar3,0);
        if (DAT_09515ce6 == '\0') {
          FUN_03f5c2a4(&DAT_0918cbd0);
          DAT_09515ce6 = '\x01';
        }
        if (lVar4 == 0) goto LAB_07729a30;
        puVar5 = *(undefined4 **)(DAT_0918cbd0 + 0xb8);
        UnityEngine_Transform__set_localEulerAngles(*puVar5,puVar5[1],puVar5[2],lVar4,0);
        FUN_04b7c294(lVar3,DAT_091cd610);
        uVar7 = FUN_04b7c294(lVar3,DAT_091cd720);
        *puVar1 = uVar7;
        thunk_FUN_03f5d7b8(puVar1,uVar7);
      }
    }
    uVar7 = *puVar1;
  }
  return uVar7;
}

