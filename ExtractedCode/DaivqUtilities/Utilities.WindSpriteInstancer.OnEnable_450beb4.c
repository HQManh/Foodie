// rea decompile_all
// name: Utilities.WindSpriteInstancer$$ApplyInstancedData
// address: 0x450beb4
// body: available
// range: 0x450beb4-0x450beb7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Utilities_WindSpriteInstancer__ApplyInstancedData
               (undefined1 param_1 [16],undefined4 param_2,long param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  if ((DAT_09518506 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c54e8);
    FUN_03f5c2a4(&DAT_09187e40);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_0918d088);
    DAT_09518506 = 1;
  }
  plVar3 = (long *)(param_3 + 0x28);
  lVar4 = *plVar3;
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar1 = UnityEngine_Object__op_Equality(lVar4,0,0);
  if ((uVar1 & 1) != 0) {
    uVar2 = FUN_04a6a14c(param_3,DAT_091c54e8);
    *(undefined8 *)(param_3 + 0x28) = uVar2;
    thunk_FUN_03f5d7b8(plVar3,uVar2);
    uVar2 = *(undefined8 *)(param_3 + 0x28);
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar1 = UnityEngine_Object__op_Equality(uVar2,0,0);
    if ((uVar1 & 1) != 0) {
      return;
    }
  }
  plVar5 = (long *)(param_3 + 0x30);
  if (*plVar5 == 0) {
    lVar4 = thunk_FUN_03f9944c(DAT_09187e40);
    UnityEngine_MaterialPropertyBlock___ctor(lVar4,0);
    *plVar5 = lVar4;
    thunk_FUN_03f5d7b8(plVar5,lVar4);
  }
  lVar4 = UnityEngine_Component__get_transform(param_3,0);
  if (lVar4 != 0) {
    uVar6 = UnityEngine_Transform__get_position(lVar4,0);
    if (*(long *)(param_3 + 0x28) != 0) {
      uVar7 = *(undefined4 *)(param_3 + 0x20);
      uVar8 = *(undefined4 *)(param_3 + 0x24);
      UnityEngine_Renderer__Internal_GetPropertyBlock(*(long *)(param_3 + 0x28),*plVar5,0);
      lVar4 = *plVar5;
      if (*(int *)(DAT_0918d088 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      if (lVar4 != 0) {
        UnityEngine_MaterialPropertyBlock__SetVectorImpl
                  (uVar6,param_2,uVar7,uVar8,lVar4,**(undefined4 **)(DAT_0918d088 + 0xb8),0);
        if (*plVar3 != 0) {
          UnityEngine_Renderer__SetPropertyBlock(*plVar3,*plVar5,0);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

